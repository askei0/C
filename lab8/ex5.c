// Declare a function in advance and then define it using other parameter
//  names as parameters. What's happening? When can this be useful?


#include<stdio.h>

int globalNum = 9;


void func(int num); // forward decliration 



int main(){

    globalNum = 7;

    printf("%d\n", globalNum); // 7
    
    func(globalNum);
    
    printf("%d\n", globalNum); // 7
}

void func(int num2){
    num2++;
}
