// 3. Write a recrusive function that calculates the factorial of a given number FROM CLA.
#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * factorial(num - 1);
}	

int main(int argCount,char* argValues[]){

	if (argCount != 2){
		printf("Ecaxtly 2 arg needed\n");
		return -1;
	}

	int num = atoi(argValues[1]);

	printf("%d\n", factorial(num));
	return 0;
}

