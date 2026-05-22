// Write a function that returns a pointer to the maximum element of an array received as a parameter.
// What is the advantage and disadvantage of this compared to returning an index?

#include <stdio.h>

int *func(int *arr, int size){

	int *max = arr;
	for (int i = 0 ; i < size; i++)
	{
		if (*(arr+i) > *max){
			max = arr + i; 
		}	
	}
	return max;
}

int main(){

	int arr[] = {1, 2, 31, 4, 5};

	int size = sizeof(arr) / sizeof(arr[0]); 

	int *result = func(arr, size);

	printf("%d\n", *result);

	return 0;
}
