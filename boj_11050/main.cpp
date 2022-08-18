#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int res = 1;
    for(int i = N-K+1; i <= N; i++){
        res *= i;
    }
    for(int j = 1; j <= K; j++){
        res /= j;
    }
    cout << res;
}