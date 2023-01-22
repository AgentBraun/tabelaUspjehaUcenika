#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TabelaUspjehaUcenika::MyForm form;
	Application::Run(% form);



}
//
//#include <Windows.h>
//
//using namespace TabelaUspjehaUcenika;
//
//int WINAPI main(HINSTANCE, HINSTANCE, LPSTR, int) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::Run(gcnew MyForm());
//	return 0;
//
//}

	



