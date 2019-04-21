#include "syscall.h"
#define MAX_LENGTH 32

int main()
{
	//OpenFileId cua file nguon va file dich
	int srcFileId1;
	int srcFileId2;
	int destFileId;
	//Do dai file
	int fileSize;
	int fileSize1;
	int fileSize2;
	int i; //Index for loop
	char c; //Ky tu de in ra
	char source1[MAX_LENGTH];
	char source2[MAX_LENGTH];
	char dest[MAX_LENGTH];
	
	PrintString("\n\t\t\t-----Append FILE-----\n\n");
	PrintString(" - Nhap ten file nguon 1: ");
	ReadString(source1, MAX_LENGTH); // Goi ham ReadString de doc vao ten file nguon
	
	PrintString(" - Nhap ten file nguon 2: ");
	ReadString(source2, MAX_LENGTH); // Goi ham ReadString de doc vao ten file nguon		

	PrintString(" - Nhap ten file dich: ");
	ReadString(dest, MAX_LENGTH); // Goi ham ReadString de doc vao ten file dich
	
	srcFileId1 = Open(source1,0); // Goi ham Open de mo file nguon 1
	srcFileId2 = Open(source2,0); // Goi ham open de mo file nguon 2
	
	if (srcFileId1 != -1 && srcFileId2 != -1) //Kiem tra mo file thanh cong
	{
		destFileId = CreateFile(dest);
		//Close(destFileId);
		
		destFileId = Open(dest, 0); // Goi ham Open de mo file dich
		if (destFileId != -1)
		{
			fileSize1 = Seek(-1, srcFileId1);
			fileSize2 = Seek(-1, srcFileId2);

			Seek(-1, srcFileId1);
			Seek(0, srcFileId2);
			i = fileSize1;
			fileSize1 = fileSize1 + fileSize2 - 1;
			for (;i < fileSize1; i++)
			{
				Read(&c, 1, srcFileId2); //Doc tung ki tu cua file nguon
				Write(&c, 1, srcFileId1); //Ghi vao file dich
			}
			
			Seek(0, destFileId);
			Seek(0, srcFileId1);
			for (i = 0; i < fileSize1; i++)
			{
				Read(&c, 1, srcFileId1); //Doc tung ki tu cua file nguon
				Write(&c, 1, destFileId); //Ghi vao file dich
			}
			Close(destFileId);
		}		
		else 
		{
			PrintString("Mo file khong thanh cong");
		}
		Close(srcFileId1); // Goi ham Close de dong file nguon
		Close(srcFileId2);
	}
	else
	{
		PrintString("Loi khi mo file");
	}
	
	return 0;
}

