// 8.Write a swap function that swaps the values of two int variables.

// 9.Write a function that expects two int pointers as parameters and returns the pointer pointing to a larger value.

// 10.Create a file my_utils.h and my_utils.c! Place the declarations of the functions
//  created in Tasks 8 and 9 in the header file and the definitions in the c file.
//   Include the old header in a main.c file and then call the functions in main!
//    Compile and run your code!

#include <stdio.h>
#include "my_utils.h"

int main()
{
    int val1 = 11, val2 = 13;
    printf("%d\n", *larger(&val1, &val2)); // 13

    printf("val1: %d, val2: %d\n", val1, val2);// 11, 13
    swap(&val1, &val2);
    printf("val1: %d, val2: %d\n", val1, val2);// 13 , 11


    printf("%d\n", globalNum);
}
