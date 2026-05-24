// Write a program that swaps the first and last digits of a number with at least 3 digits!
#include <stdio.h>
#include <math.h>

// 123 / 100. = 1
// 321
// log(1000) = 3
// log(1234) = 3.smth
// 1234 / 1000
// 4321

int main()
{
	int num;
	
	scanf("%d", &num);

	if (num < 100)
	{
		printf("Number should have at least 3 digits\n");
		return -1;
	}
	
	int log10result = log10(num); // num: 1234 = 3 // it can change an int to double 
	int last = num % 10;

	int first = num / pow(10, log10result);
	
	num = (num - last) + first; // 1234 - 4 + 1 = 1231
				    //
	num = num - (first * pow(10, log10result)) + (last * pow(10,log10result));

	printf("swapped %d\n",num);

	return 0;
}



