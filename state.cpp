#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <fstream>
#include "Json/cJSON.h"
std::vector<std::string> getDisk();
std::string base64_decode(std::string const& text);
void state(int argc)
{
	if (argc <= 1)
	{
		return;
	}
	std::ifstream configfile("config.cfg");
	const std::string text((std::istreambuf_iterator<char>(configfile)), (std::istreambuf_iterator<char>()));
	cJSON* config = cJSON_Parse(text.c_str());
	if (config == NULL)
	{
		System::Windows::Forms::MessageBox::Show("无法加载配置文件,配置文件可能发生错误", "配置文件错误", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		cJSON_Delete(config);
		return;
	}
	std::vector<std::string> temp = getDisk();
	if (temp.size() == 0)
	{
		system("shutdown -s -t 0");
	}
	bool SignFileNameState = false;
	if (cJSON_GetObjectItem(config, "SignFileNameState") == NULL)
	{
		System::Windows::Forms::MessageBox::Show("配置文件错误,未做任何读取,请检查配置文件是否正确\n错误原因:标志文件名状态错误", "配置文件错误", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		cJSON_Delete(config);
		return;
	}
	if (cJSON_IsFalse(cJSON_GetObjectItem(config, "SignFileNameState")) == 0)
	{
		SignFileNameState = true;
	}
	std::string SignFileName;
	if (SignFileNameState == false)
	{
		SignFileName = "USBLocker.ul";
	}
	else
	{
		if (cJSON_GetObjectItem(config, "SignFileName") == NULL)
		{
			System::Windows::Forms::MessageBox::Show("配置文件错误,未做任何读取,请检查配置文件是否正确\n错误原因:标志文件名错误", "配置文件错误", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			cJSON_Delete(config);
			return;
		}
		SignFileName = cJSON_GetObjectItem(config, "SignFileName")->valuestring;
	}
	std::vector<std::string> USign;
	std::vector<std::string> ConfigSign;
	for (size_t i = 0; i < temp.size(); i++)
	{
		std::ifstream file(temp[i] + "\\" + SignFileName);
		std::string filetext((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
		void 分隔(char Commandmain_a[], std::vector<std::string>&GetCommand_a);
		std::vector<std::string> temp;
		分隔((char*)filetext.c_str(), temp);
		for (size_t i = 0; i < temp.size(); i++)
		{
			USign.push_back(base64_decode(temp[i]));
		}
		file.close();
	}
	int temp_int = 1;
	std::vector<std::string> Sign;
	while (1)
	{
		if (cJSON_GetObjectItem(config, std::string("Sign" + std::to_string(temp_int)).c_str()) != NULL)
		{
			std::string temp = std::string(cJSON_GetObjectItem(config, std::string("Sign" + std::to_string(temp_int)).c_str())->valuestring).c_str();
			if (temp != "")
			{
				Sign.push_back(temp);
			}
		}
		else
		{
			break;
		}
		++temp_int;
	}
	cJSON_Delete(config);
	if (Sign.size() == 0)
	{
		System::Windows::Forms::MessageBox::Show("未添加任何标识符", "配置文件错误", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		return;
	}
	for (size_t i = 0; i < Sign.size(); i++)
	{
		for (size_t j = 0; j < USign.size(); j++)
		{
			if (Sign[i] == USign[j])
			{
				return;
			}
		}
	}
	system("shutdown -s -t 0");
	System::Environment::Exit(0);
	return;
}

void 分隔(char Commandmain_a[], std::vector<std::string>& GetCommand_a)
{
	GetCommand_a.push_back(Commandmain_a);
	if (GetCommand_a[0] == "")
	{
		return;
	}
	char* p = strtok(Commandmain_a, "\n");
	if (p == NULL)
	{
		GetCommand_a[0] = "";
		return;
	}
	GetCommand_a[0] = p;
	while (p != NULL)
	{
		p = strtok(NULL, " ");
		if (p == NULL)
		{
			return;
		}
		GetCommand_a.push_back(p);
	}
	return;
}