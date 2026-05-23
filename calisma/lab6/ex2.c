// Write a program that multiplies the "first" argument
// by the "second" argument. 
// Use addition inside a loop to achieve this. 
// Write the result to the console.
#include <stdio.h>
#include <stdlib.h>

int multi(int num1, int num2)
{
	int sum = 0;

	for (int i = 0; i < num2; i++)
	{
		sum += num1;
	}
	return sum;
}


int main(int argc, char* argv[]){

	if (argc != 3){
		printf("need 2 args\n");
		return -1;
	}
	
	int first = atoi(argv[1]);
	int second = atoi(argv[2]);

	printf("Result is %d\n", multi(first,second));


}
