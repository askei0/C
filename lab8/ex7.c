// 7.Static variable lets you create a factorial a function that counts the number of times
//  it was called with a parameter less than 1!

#include <stdio.h>

int factorial(int n)
{
    static int counter = 0;
    counter++;
    printf("counter: %d\n", counter);
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int result = factorial(10);
    printf("Result: %d\n", result);
}
