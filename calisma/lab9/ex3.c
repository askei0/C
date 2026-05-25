// Modify the previous reverse() function so that it does not replace the characters locally, 
// but creates another string and returns with it. 
// Reserve the necessary memory dynamically!
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


int main(){
	
	char str[41];
	printf("enter a string: ");
	scanf("%s", str);

	char* reversedStr = reverse(str);

	printf("Reverse is: %s\n", reversedStr);

	free(reversedStr);

	return 0;
}

