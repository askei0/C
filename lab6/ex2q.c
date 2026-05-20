// 2. Write a program that multiplies the "first" argument by the "second" argument.
//  Use addition inside a loop to achieve this. Write the result to the console.

#include <stdio.h>
#include <stdlib.h>

int multi(int num1, int num2)
{
	int sum = 0;

	for(int i = 0; i < num2; ++i){
		sum += num1;
	}
	return sum;
}

int main(int argCount, char* argValues[])
{
	if (argCount != 3)
	{
		printf("Exactly 3 args needed\n");
		return -1;
	}

	int first = atoi(argValues[1]);
	int second = atoi(argValues[2]);

	printf("result is %d\n", multi(first, second));
}
