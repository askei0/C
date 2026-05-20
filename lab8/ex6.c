// 6.Create a function, declare and define a static variable in it!
//  Increase the value of the variable and write it out.
//   Call the function in the main several times! 
// What's happening?


#include<stdio.h>

void func(){
    static int num = 0;
    num++;
    printf("%d\n", num);
}


int main(){
    func();
    func();
    func();
}
