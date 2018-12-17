#include <windows.h>
#include <Psapi.h>

int main(int argc, char **agrv)
{
	char buff[100];
	HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, 9492);
	int length = GetModuleFileNameExA(h, NULL, buff, strlen(buff));

	LPVOID mem = VirtualAllocEx(h, NULL, 100, MEM_COMMIT, PAGE_EXECUTE_WRITECOPY); // Check why no mem?

	system("pause");
	return 0;
}