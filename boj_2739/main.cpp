#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp = (n/10 + n%10)%10+ (n%10) *10;
    int count = 1;
    while(temp != n){
        temp = (temp/10 + temp%10)%10+ (temp%10) *10;
        count++;
    }
    printf("%d", count);
}