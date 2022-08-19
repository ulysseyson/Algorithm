#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;

    while(a<10){
        int b = 0, c=0;
        while(b<9-a){
            printf(" ");
            b++;
        }
        while(c<a+1){
            printf("*");
            c++;
        }
        printf("\n");
        a++;
    }
}

