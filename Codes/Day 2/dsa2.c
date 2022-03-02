//write a program to determine whether a number is even or odd.

#include <stdio.h>
#define p printf

int main() {
    int a;
    p("enter the numbers:\n");
    scanf("%i",&a);

    if (a%2==0)
    {
        p("%d is even",a);
    }
    else
    {
        p("%d is odd",a);
    }
    
    return 0;
}