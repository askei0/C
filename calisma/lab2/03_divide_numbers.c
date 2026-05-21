// Create a program in which you divide two numbers. Print the result.
// What happens if the divisor is 0?
// What happens if we use int or float variables?
//   - Use %f formatting character. Print the result with two decimals.
//   - Use %d formatting character. Check what happens.
//   - Use -W, -Wall, -Wextra and -pedantic flags. Does it result a compilation
//     error when a wrong formatting character is used?

#include <stdio.h>

int main() {
	int a = 4;
	int b = 2;

	int div = a / b;
	printf("%d", div);

	int c = 4;
	int d = 0;
	int div2 = c/d;
	printf ("%d", div2);

	float x = 4;
	float z = 2;
	float div3 = x/z;

	printf ("%.2f", div3);
	printf ("%d", div3);

	return 0;
}
