// Create a program where you compute the area of a square and a circle.
// Get the length of the square and the radius of the circle from the user.
//   - Use the function scanf("%f", &a).
//   - Use the operator & which returns the address of a variable.
//   - The value of pi should be 3.1415.

#include <stdio.h>

int main() {

	int length;
	int r;
	float pi = 3.1415; 
	printf("Enter the length: ");
	scanf("%d", &length);
	printf("Enter the radius: ");
	scanf("%d", &r);

	int areasq = 0;

	areasq = length * length;
	
	float areacrcl = 0;
	areacrcl = pi * (r*r); 

	printf("Area of the square: %d\n", areasq);
	printf("Area of the circle: %f\n", areacrcl);

	return 0;
}
