#include "MyForm.h"
#include "MyForm2.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project13::MyForm form;
	Application::Run(% form);
}



