// Write a program that reads 5 words from the user and prints them in reverse order.
//  Use an array.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *str)
{
	int length = strlen(str);

	char *reversedStr = (char*)malloc((length - 1) * sizeof(char));

	for (int i = 0; i < length; ++i)
	{
		reversedStr[i] = str[length -1 -i];
	}

	reversedStr[length] = '\0';

	return reversedStr;
}

int main()
{
	char strArr[5][31];

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", strArr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		char *reversed = reverse(strArr[4 - i]);// its same as "for (int i = 4; i >= 0; i--) {reverse(strArr[i]);} "              
		printf("%s", reversed);
		free(reversed);
	}
}
