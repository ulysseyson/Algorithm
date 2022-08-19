#include<stdio.h>
int main(){
    int c;
    scanf("%d", &c);
    while(c--){
        int n;
        int score[1001];
        scanf("%d", &n);
        double avg=0;
        for(int i=0;i<n;i++){
            scanf("%d", &score[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d\n", score[i]);
            avg=avg+score[i];
        }
        rewind(stdin);
        avg /= n;
        printf("%d\n", avg);
        int a=0;
        double rate=0;
        for(int i=0;i<n;i++){
            if(avg<score[i]) a++;
        }
        rate = a/n*100;
        printf("%.3lf%%\n", rate);
    }
}