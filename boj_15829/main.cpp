#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int l;
    cin >> l;
    ll hash=0;
    ll r=31, M = 1234567891;
    string s;
    cin >> s;
    for(int i=0; i< l;i++){
        ll tmp = s[i]-96;
        
        for(int j=0;j<i;j++){
            tmp *= r;
            tmp = tmp % M;
        }
        hash += tmp;
        hash = hash % M;
    }
    cout << hash;
}