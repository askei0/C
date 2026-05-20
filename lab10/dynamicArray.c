// IntArray Struct
// 8a - Let's create a dynamic array type containing integers, which stores the current size of the array,
//  its capacity and a pointer to an array as data members, create a function which initiate this type with default capacity of 5.

// 8b - Write a function with which we can add an element to the end of the array. If the array is full,
//  allocate an array twice as large, then copy the previous elements and update the data members.
//   Watch out for memory leaks.

#include <stdio.h>
#include <stdlib.h>

typedef struct DynamicArray DynamicArray;

struct DynamicArray
{
    int currentSize;
    int capacity;
    int *array;
};

void init_array(DynamicArray *DA)
{

    DA->currentSize = 0;
    DA->capacity = 5;

    DA->array = (int *)malloc(5 * sizeof(int));
}

void add_num(DynamicArray *DA, int newNum)
{
    if (DA->capacity <= DA->currentSize)
    {
        DA->capacity *= 2;
        int* newMemo = realloc(DA->array, DA->capacity * sizeof(int));
        if(newMemo == NULL){
            printf("Realloc Failed\n");
            free(DA->array);
            exit(1);
        }

        DA->array = newMemo;
        printf("Capacity Extended to %d\n", DA->capacity);
    }

    DA->array[DA->currentSize] = newNum;
    DA->currentSize++;
    printf("%d added. Curr.Size: %d, Capacity is: %d\n", newNum, DA->currentSize, DA->capacity);
}

void destroyArray(DynamicArray *DA)
{
    free(DA->array);
    DA->currentSize = 0;
    DA->capacity = 0;
}

int main()
{

    DynamicArray DA;
    init_array(&DA);

    add_num(&DA, 3);
    add_num(&DA, 4);
    add_num(&DA, 5);
    add_num(&DA, 6);
    add_num(&DA, 7);
    add_num(&DA, 9);

    destroyArray(&DA);
}
