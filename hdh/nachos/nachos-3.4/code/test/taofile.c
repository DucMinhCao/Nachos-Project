#include "syscall.h"

int main()
{
	char *fileName;
	int i;
	PrintString("Moi ban nhap vao filename : ");
	ReadString(fileName, 32);
	CreateFile(fileName);
}
