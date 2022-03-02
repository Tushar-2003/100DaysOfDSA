// Write a program to get 3 values from user and find max and min number of it.

#include <stdio.h>
#define p printf

int main() {
    int a, b, c;
    p("enter the numbers:\n");
    scanf("%i%i%i",&a,&b,&c);
p("the greatest number is:");
    if (a>b)
    {
        if (a>c)
        {
            p("%i",a);
        }
        else
        {
            p("%i",c);
        }
    }
    else
    {
        if (b>c)
        {
            p("%i",b);
        }
        else
        {
            p("%i",c);
        }
    }
    return 0;
}