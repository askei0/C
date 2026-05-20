// Declare and define a variable outside the main function. 
// Change its value and write it out!


#include<stdio.h>

int globalNum = 9;


void func(){
    int num1 = 0;
    globalNum = 8;
}



int main(){

    globalNum = 7;

    printf("%d\n", globalNum); // 7
    
    func();
    
    printf("%d\n", globalNum); // 8
}
