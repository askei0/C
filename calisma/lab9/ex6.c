// Modify the solution of the previous task so that if the user types the word "END", 
// the scan ends before reaching the limit specified as a command line argument. 
// Use an array. Then write the contents of the array in reverse order.
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

	int wordcnt = 0;

	for (int i = 0; i < arrLength; i++)
	{
		char tempStr[31];
		scanf("%s", tempStr);
		if (strcmp("END", tempStr) == 0)
		{
			break;
		}
		wordcnt++;
		strcpy(strArr[i], tempStr);


	}


	for (int i = 0; i < wordcnt; i++)
	{
		char* reversed = reverse(strArr[wordcnt - i -1]);
		printf("%s\n",reversed);
		free(reversed);
	}

}

