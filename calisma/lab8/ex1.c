// Declare and define a variable outside the main function. 
// Change its value and write it out!
#include <stdio.h>

int glabalNum = 9;

void func()
{
	int num1 = 0;
	glabalNum = 8;
}


int main(){

	printf("%d\n", glabalNum); // 9

	glabalNum = 7;
	printf("%d\n", glabalNum); // 7

	func();
	printf("%d\n", glabalNum); // 8
}

