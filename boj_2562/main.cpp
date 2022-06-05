#include<stdio.h>
int main(){
    int arr[9];
    for(int i =0; i<9;i++){
        scanf("%d", &arr[i]);
    }
    int max =  arr[0];
    int max_index = 0;
    for(int j=0;j<9;j++){
        if(max<arr[j]){
            max = arr[j];
            max_index = j;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_index+1);
}