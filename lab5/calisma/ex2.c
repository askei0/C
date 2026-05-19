// Change the value of a pointer through a pointer to a pointer. Then change the value pointed by the pointed pointer as well!

#include <stdio.h>

int main()
{
	int num = 5;
	printf("Before %d\n", num);

	int *p = &num;
	*p = 7;
	
	printf("Before %d\n", num);

	int **pp = &p;
	**pp = 0;

	printf("Before %d\n", num);

	int ***ppp = &pp;
	***ppp = 4;
	
	printf("Before %d\n", num);

}


