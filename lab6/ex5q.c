// 5. Write a program, which writes the even elements of an integer array to a file
//  called "even_numbers.txt".

#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Exactly 2 args needed\n");
		return -1;
	}
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	FILE *fp = fopen(argv[1], "w");
	if (fp == NULL)
	{
		printf("File opening failed\n");
		return -1;
	}

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			fprintf(fp, "%d ",arr[i]);
		}
	}

	fclose(fp);	
}
