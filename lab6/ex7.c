// 7. Write a new program that reads the file created by exercise number 6,
// \ and adds the numbers (of the file) together. Write the output on the console.

#include<stdio.h>
// #define HI 10


int main(){
    FILE* fp = fopen("even_numbers.txt","r");

    if(fp == NULL){
        printf("File access failed\n");
        return -1;
    }

    // fscanf
    // fgets
    // getc

    int num, sum = 0;

    while(fscanf(fp,"%d",&num) != EOF)
    {
       sum += num;
    }

    printf("Sum : %d\n", sum);
    // printf("Sum : %d\n", HI);
    
    fclose(fp);
}
