#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int remain = n%5;
    if(remain == 3){
        if(n>=3) printf("%d", (n-3)/5+1);
        else printf("%d",-1); 
    }
    else if(remain == 1){
        if(n>=6) printf("%d", (n-6)/5+2);
        else printf("%d",-1);
    }
    else if(remain == 2){
        if(n>=12) printf("%d", (n-12)/5+4);
        else printf("%d",-1);
    }
    else if(remain == 4){
        if(n>=9) printf("%d", (n-9)/5+3);
        else printf("%d",-1);
    }
    else if(remain == 0){
        printf("%d", n/5);
    }
}