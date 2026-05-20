// 4. Write a program that stores our name in a "player.txt"(given by CLA) file.

#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Exactly 2 args needed\n");
		return -1;
	}

	FILE *fp = fopen(argv[1], "w");

	if (fp == NULL)
	{
		printf("File opening failed");
		return -1;
	}

	fprintf(fp, "Kayra\n");

	fclose(fp);
	

}
