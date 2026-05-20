#include <stdio.h>
#include <math.h>

int main(){
	
	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	int log10res = log10(num); // num:1234 => log10Result : 3
	int last = num % 10; 

	// 1234 / 10^3 == 1.234 => 1    
	int first = num / pow(10, log10res);

	num = (num - last) + first;	// 1234 - 4 + 1 = 123 
	
	num = num - (first * pow(10, log10res)) + (last * pow(10,log10res));

	printf("Swapped: %d\n", num);

}
