#include <stdio.h>

int compare(int a, int b){
    if(a>b) return 1;
    else if(a<b) return 2;
    else return 3;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int det = compare(a, b);

    if(det == 1) printf(">");
    else if(det == 2) printf("<");
    else printf("==");
}

// a b 를 넘겨주면 a b 크기를 비교해서 원하는 출력을 출력
// a b 를 넘겨주면 a b 크기를 비교해서 비교 결과를 숫자로 반환