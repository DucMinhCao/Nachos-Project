#include "syscall.h"
#include "copyright.h"


int main()
{
	PrintString("Nhap so luong phan tu cua mang : ");
	int n = ReadInt();
	int a[100]; // 5 7 1 9 
	int i,j,k,l,tmp;
	for (i = 0; i < n; i++)
	{
		a[i] = ReadInt();
	}

	PrintString("Mang sau khi nhap la : \n");

	for (j = 0; j < n; j++)
	{
		PrintInt(a[j]);
		PrintString(" ");
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (a[j] < a[i])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	PrintString("\nMang sau khi sap xep la : \n");
	for (i = 0; i < n; i++)
	{
		PrintInt(a[i]);
		PrintString(" ");
	}
}
