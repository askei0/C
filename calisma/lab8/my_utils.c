#include "my_utils.h"

void swap(int* num1,int* num2){

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}


int* larger(int* num1,int* num2){

	// if (*num1 > * num2)
	// 	return num1;
	// return num2;


	return (*num1 > *num2) ? num1 : num2;

}

int globalNum = 7;

