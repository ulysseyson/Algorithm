#include<stdio.h>
int main(){
    int num[10] ={0, };
    int mul=1;
    for(int i =0;i<3;i++){
        int temp;
        scanf("%d", &temp);
        mul*=temp;
    }
    while(mul>0){
        int temp = mul % 10;
        num[temp] += 1;
        mul /= 10;
    }
    for(int i=0; i<10;i++){
        printf("%d\n", num[i]);
    }
}