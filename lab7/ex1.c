// Write a program that swaps the first and last digits of a number with at least 3 digits!

// 123 / 100. = 1
// 321
// log(1000) = 3

// 1234 / 1000
// 4231

#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	scanf("%d", &num);
                                                 
	if (num < 100){
	printf("number should have al least 3 digits\n");     
	return -1;
	}                                            

	int log10Result = log10(num); // num:1234 => log10Result : 3
	int last = num % 10;                         
	        
	// 1234 / 10^3 == 1.234 => 1                     
	int first = num / pow(10, log10Result);
                                          
	num = (num - last) + first; // 1234 - 4 + 1 = 123
	
	// 1231 - 1000 = 231 + 4231                  
	num = num - (first * pow(10, log10Result)) + (last * pow(10, log10Result));                   
	printf("Swapped: %d\n", num);                
                  
} 

