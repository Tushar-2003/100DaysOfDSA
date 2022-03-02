//Write a menu driven calculator to perform operations on two numbers.

#include <stdio.h>
#define p printf
#define c case
#define b break

int main() {
    int a, d;
    char t;
    p("select an operation(+,-,*,/):");
    scanf("%c",&t);
    p("enter two numbers:\n");
    scanf("%d%d", &a,&d);

    switch (t)
    {
    c '+':
        p("%d+%d=%d",a, d, a+d);
        b;
    c '-':
        p("%d-%d=%d",a, d, a-d);
        b;
    c '*':
        p("%d*%d=%d",a, d, a*d);
        b;
    c '/':
        p("%d/%d=%d",a, d, a/d);
        b;
    default:
        printf("burh,enter a correct operation(+,-,*,/)!");
        b;
    }
    
    return 0;
}