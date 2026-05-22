// A function can also return a value using a return value or a pointer (e.g. scanf()). 
// When should you use which one? What are the advantages/disadvantages of the methods?
#include <stdio.h>

int square_ret(int x) {
	return x * x;
}

void square_ptr(int x, int *out) {
	*out = x * x;
}

int main() {
	
		// return value 
	int result1 = square_ret(5);
	printf("%d\n", result1);

	// pointer 
	int result2;
	square_ptr(5, &result2);
	printf("%d\n", result2);

	return 0;
}
