// Can we apply the function written in the previous task to a single variable, as if it were an array with one element?
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

	int arr = 4;
	int *result = func(&arr, 1);
	printf("%d\n", *result);
	return 0;
}
