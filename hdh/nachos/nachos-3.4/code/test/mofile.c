#include "syscall.h"

int main()
{
	int openID;
	openID = Open("stdin.txt", 3);
	PrintInt(openID);
	return 0;
}
