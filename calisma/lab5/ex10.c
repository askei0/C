// Write a function that, from two pointers pointing inside the same array, 
// decides which one points to an element with a smaller index.

#include <stdio.h>

int func(int *arr, int *p1, int *p2){

	return p1 < p2;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int *p1 = &arr[1];

	int* p2 = &arr[4];

	int result = func(arr, p1, p2);
	printf("p1 daha küçük indexte mi: %d\n",result);
	return 0;
}

