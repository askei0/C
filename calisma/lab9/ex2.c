// Create a function called reverse() that has a string parameter. The function should reverse the characters of the string locally. That is, the function returns the result in the same memory area that it received as a parameter. For example, the characters of a palindrome string are not changed in the function.
#include <stdio.h>
#include <string.h>

char* reverse(char* str){

	int length = strlen(str);

	for (int i = 0; i < length / 2; i++)
	{
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
	return str;
}


int main(){
	
	char str[41];
	printf("enter a string: ");
	scanf("%s", str);

	reverse(str);

	printf("Reverse is: %s\n", str);
}

