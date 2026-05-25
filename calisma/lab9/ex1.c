// Write a program that asks the user for a text of up to 20 characters and makes a copy of it. Make sure that the copy only uses as much memory space as is absolutely necessary.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str[21]; // "\0"
	scanf("%s", str); // "hi"

	int length = strlen(str);
	char* cpy = (char *)malloc((length + 1) * sizeof(char));

	strcpy(cpy ,str);

	printf("org: %s cpy: %s\n",str,cpy);

	free(cpy);
}
