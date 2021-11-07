#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include "windows.h"
#include <fstream>
#include <locale.h>
#include <locale>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	HANDLE file0;
	DWORD k;
	int len = 0;
	int size = 0;
	char Buffer[1024] = { 0 };
	string text;
	fstream file("passwd.txt");

	setlocale(LC_ALL, "Russian");

	file0 = CreateFile(L"CONIN$", GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
	ReadFile(file0, Buffer, sizeof(Buffer), &k, NULL);

	int file_read = 0, count = 0, sum = 0;

	file_read = _open("passwd.txt", O_RDONLY);

	text = Buffer;
	len = text.length();
	cout << "Количество байт = ";
	if (len < 1024) cout << len << endl;
	else cout << 1024 << endl;

	count = _read(file_read, Buffer, 1024);
	while (count > 0)
	{
		sum += count * 4;
		if (sum > 1024)
		{
			cout << "Размер читаемого файла привысил 1024 байта.";
			cout << endl;
			return 0;
		}
		for (int i = 0; i < count; i++)
			cout << Buffer[i];
		count = _read(file_read, Buffer, 1024);
	}
	cout << "\nКоличество байт = " << sum << "\n";
	cout << endl;
	return 0;
}