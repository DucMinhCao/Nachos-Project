#include "syscall.h"

int main()
{
	char* buf;
	ReadString(buf, 255);
	PrintString(buf);
	return 0;
}
