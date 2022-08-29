#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int N;
    cin >> N;
    int i=1;
    for(; i<N; i++){
        int tmp = i;
        int part_sum=i;
        while(tmp>0){
            part_sum += (tmp%10);
            tmp /= 10;
        }
        if(part_sum == N){
            cout << i;
            break;
        }
    }
    if(i==N) cout << 0;
}