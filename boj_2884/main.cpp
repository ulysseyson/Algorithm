#include<stdio.h>

int main(){
    int hour1, minute1;
    scanf("%d %d", &hour1, &minute1);
    if(minute1>=45) minute1 -= 45;
    else if(minute1<45){
        hour1 -= 1;
        minute1 += 15;
        if(hour1<0) hour1+=24;
    }
    printf("%d %d" , hour1, minute1);
}