// Write a recrusive function that calculates the factorial of a given number.
#include <stdio.h>
#include <stdlib.h>

int fact(int num){

	if (num <= 1)
	{
		return 1;
	}
	return num * fact(num - 1);

}

int main(int argc,char* argv[]){

	if (argc != 2)
	{
		printf("1 arg needed\n");
		return -1;
	}

	int factor = atoi(argv[1]);

	printf("Fact: %d\n", fact(factor));

}


