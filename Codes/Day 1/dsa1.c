// Write A Program To Get Input From User & Print It On Console.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char u[100];
    printf("enter an input:");
    fgets(u, sizeof(u),stdin);
    printf("you input:\n");
    puts (u);
    return 0;
}