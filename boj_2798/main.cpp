#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int cards[300001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int M, N;

    cin >> M >> N;

    for(int i = 0; i < M; i++){
        cin >> cards[i];
    }
    int sum = 0;
    for(int i = 0; i < M; i++){
        for(int j = i+1; j < M; j++){
            for(int k = j+1; k < M; k++){
                int sumN = cards[i]+cards[j]+cards[k];
                if(sum <  sumN && sumN <= N) sum = sumN;
            }
        }
    }
    
    cout << sum << "\n";
    
}