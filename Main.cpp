#include "MainWindow.h"
#include <iostream>
#include <vector>
#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")
void state(int argc);
int argc_;
int main(int argc, char* argv[])
{
	argc_ = argc;
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	state(argc);
	System::Windows::Forms::Application::Run(gcnew USBLocker::MainWindow());
	return 0;
}