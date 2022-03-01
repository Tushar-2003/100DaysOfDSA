// Write A Program To Create A Basic Calulator
#include <stdio.h>
#define p printf

int main() {
    int a, b, add, sub, mult, div, mod;

    p("A simple Calcullator to add, subtract, multiply, divide and remainder\n");
    
    p("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);

    add= a+b;
    sub= a-b;
    mult= a*b;
    div= a/b;
    mod= a%b;

    p("\nAddition of the numbers:%d\n", add);
    p("Subtraction of the numbers:%d\n", sub);
    p("Multiplication of the numbers:%d\n", mult);
    p("Division of the numbers:%d\n", div);
    p("Remainder of the numbers:%d\n", mod);
    return 0;
}

