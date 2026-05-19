// Redesign the previous function so that we get the array using a pointer to the first element and a pointer to the last element.
// What happens if we overindex by one? What happens if we overindex by more?

#include <stdio.h>

int arrSum(int *first, int *last){
	int sum = 0;

	while(first <= last)
	{
		sum += *first;
		first++;
	}
	return sum;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	
	int *p = NULL;
	printf("%d\n", *p);

	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Sum of arr = %d\n", arrSum(arr, &arr[size - 1]));


}
