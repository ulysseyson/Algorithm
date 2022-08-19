#include<stdio.h>

void grade(int b){
    if(b>=90) printf("A");
    else if(b>=80) printf("B");
    else if(b>=70) printf("C");
    else if(b>=60) printf("D");
    else printf("F");
}

int main(){
    int score;
    scanf("%d", &score);

    grade(score);
}

//시험 점수 score를 넘겨주면 함수에서 이를 바탕으로 등급 출력