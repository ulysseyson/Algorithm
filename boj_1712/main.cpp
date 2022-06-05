#include<stdio.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    // a + b*n < c*n
    // a < (c-b) * n
    // a/(c-b) < n
    if(b>c) printf("-1");
    else{
        n = a/(c-b) + 1;
        printf("%d", n);
    }

}