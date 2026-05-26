// Write a program that accepts a number as a command-line argument and reads as many words from the user as they enter. 
// When you have entered them all, write the words in reverse order. Use an array.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(char* str){

	int length = strlen(str);

	char* reversedStr = (char*) malloc((length + 1) * sizeof(char));

	for (int i = 0; i < length; i++)
	{
		reversedStr[i] = str[length - 1 - i];
	}

	reversedStr[length] = '\0';

	return reversedStr;
}

int main(int argc, char* argv[]){
	
	if (argc != 2){
		printf("Exactly one arg needed\n");
		return -1;
	}

	int arrLength = atoi(argv[1]);

	char strArr[arrLength][31];

	for (int i = 0; i < arrLength; i++)
	{
		scanf("%s",strArr[i]);
	}

	for (int i = 0; i < arrLength; i++)
	{
		char* reversed = reverse(strArr[arrLength - i -1]);
		printf("%s\n",reversed);
		free(reversed);
	}

}

