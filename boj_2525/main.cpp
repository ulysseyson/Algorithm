#include<stdio.h>
int main(){
    int hour, minute, oven_time;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &oven_time);

    minute += oven_time; 
    hour += minute/60;
    minute %= 60;
    hour %= 24;
    printf("%d %d", hour, minute);
}


