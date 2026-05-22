// Explain why the operator& is needed in the case of scanf() 
// when reading into an integer variable.
#include <stdio.h>

void inc(int* num)
{
	(*num)++;
}


int main() {
	int num = 1;

	inc(&num);

	printf("%d\n", num);
}
