#include "MyForm.h"
#include <Windows.h>

using namespace KhomychLr14TxPrZSGr22; // Назва проекту


[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
