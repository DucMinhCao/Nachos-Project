#include "syscall.h"

int main()
{
	int length = 255;
	char str[length];
	ReadString(str,length);
	PrintString(str);
}
