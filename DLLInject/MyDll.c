#include <Windows.h>

BOOL WINAPI DllMain(
	_In_ HINSTANCE hinstDLL,
	_In_ DWORD     fdwReason,
	_In_ LPVOID    lpvReserved
)
{
	MessageBox(NULL, "random1", "random2", MB_OK);
	return TRUE;
}