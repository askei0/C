// Write a function that returns the sum of the elements in an array received as a parameter.
// The array is passed using a pointer to the first element and an integer variable containing a length. 
// Let's write the function without using the operator[], using pointer arithmetic. 
// Is it possible to find the size of the array inside the function without the variable containing the length?


#include <stdio.h>
int arrSum(int *arr, int size)
{
	printf("arrSum: %d\n", sizeof(arr));
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}


int main()
{
	int arr[] = {1,2,3,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("arr: %d, arr+1: %d\n", arr, arr+1);

	printf("arrSum: %d\n", sizeof(arr));

	printf("sum of array %d\n", arrSum(arr, size));
}

