#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <list>
#include "Json/cJSON.h"
std::vector<std::string> getDisk();
std::string base64_encode(std::string text);
extern int argc_;
namespace USBLocker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainWindow 摘要
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	public: System::Windows::Forms::ComboBox^ comboBox1;
	private:

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::ComboBox^ comboBox2;
	private:


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(82, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 25);
			this->comboBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"选择盘符";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 23);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"标识符";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(162, 53);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(99, 21);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"自定义文件名";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox2_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 23);
			this->textBox2->TabIndex = 7;
			this->textBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(258, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 51);
			this->label3->TabIndex = 8;
			this->label3->Text = L"如果不选择\r\n默认文件名将为:\r\nUSBLocker.ul\r\n";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(82, 103);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(128, 25);
			this->comboBox2->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(217, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(278, 178);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"使用方法";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"所有标识符";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 178);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"刷新盘符";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(261, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"写入U盘";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(63, 77);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"删除该U盘标识符";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(246, 151);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(63, 21);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"自启动";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox1_CheckedChanged);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 203);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"USBLocker";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::MainWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	if (argc_ >= 2)
	{
		exit(0);
	}
	System::Security::Principal::WindowsIdentity^ id = System::Security::Principal::WindowsIdentity::GetCurrent();
	System::Security::Principal::WindowsPrincipal^ principal = gcnew System::Security::Principal::WindowsPrincipal(id);
	if (principal->IsInRole(System::Security::Principal::WindowsBuiltInRole::Administrator) != true)
	{
		MessageBox::Show("请使用管理员权限运行!","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		System::Environment::Exit(0);
	}
	if (CheckIsAutoRun("USBLocker") == true)
	{
		checkBox1->Checked = true;
	}
	std::ifstream configfile("config.cfg");
	if (configfile.is_open() == false)
	{
		cJSON* config = cJSON_CreateObject();
		cJSON_AddBoolToObject(config, "SignFileNameState", false);
		cJSON_AddStringToObject(config, "SignFileName", "");
		std::ofstream configfile_1("config.cfg");
		configfile_1 << cJSON_Print(config);
		configfile_1.close();
		cJSON_Delete(config);
		configfile.close();
		this->checkBox2->Checked = false;
	}
	else
	{
		const std::string text((std::istreambuf_iterator<char>(configfile)), (std::istreambuf_iterator<char>()));
		cJSON* config = cJSON_Parse(text.c_str());
		if (cJSON_GetObjectItem(config, "SignFileNameState") == NULL)
		{
			MessageBox::Show("配置文件错误,未做任何读取,请检查配置文件是否正确\n错误原因:读取配置文件中的标志文件名状态错误\n解决方法:把配置文件删除,配置文件名为:config.cfg,注意,可能会丢失你之前的数据", "配置文件错误", MessageBoxButtons::OK, MessageBoxIcon::Error);
			goto exit;
		}
		else
		{
			if (cJSON_IsTrue(cJSON_GetObjectItem(config, "SignFileNameState")) == 0)
			{
				this->checkBox2->Checked = false;
			}
			else
			{
				this->checkBox2->Checked = true;
				if (cJSON_GetObjectItem(config, "SignFileName") == NULL || cJSON_GetObjectItem(config, "SignFileName")->valuestring == "")
				{
					MessageBox::Show("配置文件错误,未做任何读取,请检查配置文件是否正确\n错误原因:读取配置文件中的标志文件名错误\n解决方法:把配置文件删除,配置文件名为:config.cfg,注意,可能会丢失你之前的数据", "配置文件错误", MessageBoxButtons::OK, MessageBoxIcon::Error);
					this->checkBox2->Checked = false;
					goto exit;
				}
				else
				{
					this->textBox2->Visible = true;
					String^ str2 = gcnew String(std::string(cJSON_GetObjectItem(config, "SignFileName")->valuestring).c_str());
					this->textBox2->Text = str2;
					this->label3->Visible = false;
				}
			}
		}
		int temp_int = 1;
		while (1)
		{
			if (cJSON_GetObjectItem(config, std::string("Sign" + std::to_string(temp_int)).c_str()) != NULL)
			{
				std::string temp = std::string(cJSON_GetObjectItem(config, std::string("Sign" + std::to_string(temp_int)).c_str())->valuestring).c_str();
				String^ temp_CS = gcnew String(temp.c_str());
				if (temp != "")
				{
					comboBox2->Items->Add(temp_CS);
				}
			}
			else
			{
				break;
			}
			++temp_int;
		}
exit:
		cJSON_Delete(config);
	}
	std::vector<std::string> temp = getDisk();
	if (temp.size() == 0)
	{
		MessageBox::Show("未检测到主机插入U盘,请插入U盘后使用", "请插入U盘", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	for (size_t i = 0; i < temp.size(); i++)
	{
		String^ str2 = gcnew String(temp[i].c_str());
		comboBox1->Items->Add(str2);
	}
	}
private: System::Void MainWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Windows::Forms::DialogResult^ ReturnState = MessageBox::Show("是否保存输入的内容,如果想保存并退出,选择是,否则选择否,想返回修改则选择取消", "", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
	if (*ReturnState == System::Windows::Forms::DialogResult::Yes)
	{
		cJSON* config = cJSON_CreateObject();
		cJSON_AddBoolToObject(config, "SignFileNameState", this->checkBox2->Checked);
		cJSON_AddStringToObject(config, "SignFileName", (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox2->Text));
		for (int i = 0; i <= comboBox2->Items->Count - 1; i++)
		{
			cJSON_AddStringToObject(config, std::string("Sign" + std::to_string(i + 1)).c_str(), ((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(comboBox2->Items[i]->ToString())));
		}
		remove("config.cfg");
		std::ofstream file("config.cfg");
		file << cJSON_Print(config);
		file.close();
		cJSON_Delete(config);
		return;
	}
	else if (*ReturnState == System::Windows::Forms::DialogResult::No)
	{
		System::Environment::Exit(0);
	}
	else
	{
		e->Cancel = true;
		return;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("U盘内标识符的作用是:防止随便插个U盘就能过检测,这个标识符您可以自定义\n添加:将U盘内标识符框里的文本添加至所有标识符栏里\n选择盘符是:将表示符写入哪个盘内,会显示系统内所有可移动设备盘符\n所有标识符是:您添加的标识符点击旁边的按钮即可删除该选择的\n写入U盘:将你当前选择的标识符写入进你选择的U盘,可重复添加\n删除该U盘标识符:删除当前选择U盘的标识符,请注意:如果检测不到您U盘的标识符,则无法开机,请谨慎删除\n自定义文件名是:修改标识符文件夹名,此项慎重修改,可能会导致你没法开机\n注意:当您20次开机后仍然没进入桌面会自动取消锁定", "使用方法", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Clear();
	comboBox1->SelectedIndex = -1;
	std::vector<std::string> temp = getDisk();
	if (temp.size() == 0)
	{
		MessageBox::Show("未检测到主机插入U盘,请插入U盘后使用", "请插入U盘", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	for (size_t i = 0; i < temp.size(); i++)
	{
		String^ str2 = gcnew String(temp[i].c_str());
		comboBox1->Items->Add(str2);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		MessageBox::Show("U盘标识符禁止为空", "错误", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	for (int i = 0; i <= comboBox2->Items->Count - 1; i++)
	{
		if (comboBox2->Items[i]->ToString() == textBox1->Text)
		{
			MessageBox::Show("不允许标识符重复!", "错误", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	comboBox2->Items->Add(textBox1->Text);
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true)
	{
		this->label3->Visible = false;
		this->textBox2->Visible = true;
	}
	else
	{
		this->label3->Visible = true;
		this->textBox2->Visible = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text == "")
	{
		return;
	}
	System::Windows::Forms::DialogResult^ DeleteSign = MessageBox::Show("是否删除该标识符", "删除", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (*DeleteSign == System::Windows::Forms::DialogResult::Yes)
	{
		comboBox2->Items->Remove(comboBox2->Text);
	}
	else
	{
		return;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "")
	{
		MessageBox::Show("未选择需要删除标识符的U盘!", "删除", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	System::Windows::Forms::DialogResult^ DeleteSign = MessageBox::Show("是否删除该U盘全部标识符,删除后将无法恢复", "删除", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (*DeleteSign == System::Windows::Forms::DialogResult::Yes)
	{
		std::string SignName = "USBLocker.ul";
		if (checkBox2->Checked == true)
		{
			if (textBox2->Text != "")
			{
				SignName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox2->Text);
			}
		}
		const std::string temp = std::string((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(comboBox1->Text)) + "\\" + SignName;
		remove(temp.c_str());
		MessageBox::Show("已删除", "删除", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		return;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "")
	{
		MessageBox::Show("未选择需要写入的U盘!", "写入", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (comboBox2->Text == "")
	{
		MessageBox::Show("未选择需要写入的标识符!", "写入", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	std::string SignName = "USBLocker.ul";
	if (checkBox2->Checked == true)
	{
		if (textBox2->Text != "")
		{
			SignName = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox2->Text);
		}
		else
		{
			MessageBox::Show("自定义文件名为空!", "写入", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	std::ofstream file(std::string((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(comboBox1->Text)) + "\\" + SignName, std::ofstream::app);
	if (!file.is_open())
	{
		MessageBox::Show("在写入到U盘时发生错误", "写入", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	file << base64_encode((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(comboBox2->Text)) << std::endl;
	file.close();
	MessageBox::Show("标识符已写入U盘!", "写入", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
	   bool CheckIsAutoRun(String^ name)
	   {
		   bool isTrue = false;
		   Microsoft::Win32::RegistryKey^ HKLM = Microsoft::Win32::Registry::LocalMachine;
		   Microsoft::Win32::RegistryKey^ run = HKLM->CreateSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\\");
		   if (run->GetValue(name) != nullptr)
		   {
			   isTrue = true;
		   }
		   else
		   {
			   isTrue = false;
		   }
		   run->Close();
		   HKLM->Close();
		   return isTrue;
	   }
	   void AutoRunWhenStart(String^ name, String^ path)
	   {
		   Microsoft::Win32::RegistryKey^ HKLM = Microsoft::Win32::Registry::LocalMachine;
		   Microsoft::Win32::RegistryKey^ run = HKLM->CreateSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\\");
		   if (!CheckIsAutoRun(name))
		   {
			   run->SetValue(name, path);
			   run->Close();
			   HKLM->Close();
		   }
	   }
	   void MarshalString(String^ s, std::string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	std::string UACMessageBox = "@echo off\n \n:: BatchGotAdmin\n:-------------------------------------\nREM  --> Check for permissions\n>nul 2>&1 \"%SYSTEMROOT%\\system32\\cacls.exe\" \"%SYSTEMROOT%\\system32\\config\\system\"\n \nREM --> If error flag set, we do not have admin.\nif '%errorlevel%' NEQ '0' (\n    echo Requesting administrative privileges...\n    goto UACPrompt\n) else ( goto gotAdmin )\n \n:UACPrompt\n    echo Set UAC = CreateObject^(\"Shell.Application\"^) > \"%temp%\\getadmin.vbs\"\n    echo UAC.ShellExecute \"%~s0\", \"\", \"\", \"runas\", 1 >> \"%temp%\\getadmin.vbs\"\n \n    \"%temp%\\getadmin.vbs\"\n    exit /B\n \n:gotAdmin\n    if exist \"%temp%\\getadmin.vbs\" ( del \"%temp%\\getadmin.vbs\" )\n    pushd \"%CD%\"\n    CD /D \"%~dp0\"\n:--------------------------------------\n\n@echo on\n";
	if (checkBox1->Checked == true)
	{
		System::String^ temp_String = gcnew System::String(GetType()->Assembly->Location);
		System::String^ temp_String1 = gcnew System::String(System::Environment::CurrentDirectory);
		std::string p;
		std::string p1;
		MarshalString(temp_String, p);
		MarshalString(temp_String1, p1);
		std::string temp_string = "cd " + p1 + "\n" + p + std::string(" start");
		std::ofstream batfile("USBLocker.bat");
		batfile << temp_string;
		batfile.close();
		System::String^ temp = gcnew System::String("\"" + System::Environment::CurrentDirectory + "\\USBLocker.bat\"");
		AutoRunWhenStart("USBLocker", temp);
	}
	else
	{
		Microsoft::Win32::RegistryKey^ HKLM = Microsoft::Win32::Registry::LocalMachine;
		Microsoft::Win32::RegistryKey^ run = HKLM->CreateSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\\");
		if (CheckIsAutoRun("USBLocker"))
		{
			run->DeleteValue("USBLocker");
			run->Close();
			HKLM->Close();
		}
	}
}
};
}