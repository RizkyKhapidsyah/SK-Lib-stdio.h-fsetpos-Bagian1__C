#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	FILE* pFile;
	fpos_t position;

	pFile = fopen("myfile.txt", "w");
	fgetpos(pFile, &position);
	fputs("Ini adalah contoh", pFile);
	fsetpos(pFile, &position);
	fputs("Ini", pFile);
	fclose(pFile);

	_getch();
	return 0;
}