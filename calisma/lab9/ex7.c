#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
	

	char** strArr = (char**)malloc(1);

	int wordcnt = 0;
	char tempStr[100];
	while(fscanf(stdin, "%s", tempStr) != EOF)
	{
		// preparing memory for the new word
		wordcnt++;
		char** tempMemory = (char**) realloc(strArr,wordcnt * sizeof(char*));
		if(tempMemory == NULL){
			printf("Reallocation failed!\n");
			return 1;
		}
		strArr = tempMemory;
		strArr[wordcnt -1] = (char*)malloc((strlen(tempStr) +1) * sizeof(char));
		// store the value
		strcpy(strArr[wordcnt -1], tempStr);
	}


	for (int i = 0; i < wordcnt; i++)
	{
		char* reversed = reverse(strArr[wordcnt - i -1]);
		printf("%s\n",reversed);
		free(reversed);
	}

	for (int i = 0; i < wordcnt; i++)
	{
		free(strArr[i]);
	
	}
	free(strArr);
}
