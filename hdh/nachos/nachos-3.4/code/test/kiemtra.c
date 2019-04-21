#include "syscall.h"
#define MAX_LENGTH 32
int main()
{
	int srcFileId;
	int fileSize;
	char c;	
	char source1[MAX_LENGTH];
	PrintString(" - Nhap ten file nguon 1: ");
	ReadString(source1, MAX_LENGTH); // Goi ham ReadString de doc vao ten file nguon

	srcFileId = Open(source1, 0);
	fileSize = Seek(-1,srcFileId);
	Read(&c, 1, srcFileId);
	PrintChar(c);
}
