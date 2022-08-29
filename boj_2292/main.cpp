#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll N;
    cin >> N;

    ll dd = (N-2) / 6;
    ll x = 1;
    dd++;
    while(dd>0){
        dd-=x;
        x++;
    }
    if(N == 1) cout << 1;
    else if(N==2) cout << 2;
    else  cout << x;

}