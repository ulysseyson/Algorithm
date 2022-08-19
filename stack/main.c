#include<stdio.h>

int stack[10000];
int top=-1;
void push(int a){
    stack[top+1] = a;
    top++;
}
int pop(){
    top--;
    return stack[top+1];
}
int main(){
    push(5); 
    push(3); 
    push(1); 
    push(4);
    printf("%d", pop());
}