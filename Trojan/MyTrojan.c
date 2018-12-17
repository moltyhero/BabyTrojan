#include <windows.h>
#include <Psapi.h>

int main(int argc, char **agrv)
{
	char buff[100];
	HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, 2308);
	int length = GetModuleFileNameExA(h, NULL, buff, strlen(buff));

	system("pause");
	return 0;
}