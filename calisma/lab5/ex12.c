// Can we apply the function written in the previous task to half of an array? How?

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

	int *result = func(arr, size / 2); // first half
	printf("%d\n", *result);
	
	result = func(arr + size / 2, size / 2); // second half

	printf("%d\n", *result);

	return 0;
}
