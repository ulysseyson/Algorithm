#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll N;
    cin >> N;

    ll r, c;
    cin >> r >> c;

    long long basis = (long long)pow(2, N-1);

    ll res = 0;

    // 4등분의 시작점
    while(basis != 0){
        res += ((r>=basis) * 2 + (c>=basis)) * basis * basis;

        if(r>=basis) r -= basis;
        if(c>=basis) c -= basis;

        basis /= 2;
    }

    cout << res;

    
}