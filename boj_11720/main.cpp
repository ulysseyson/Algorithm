//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long LL;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll N;
    cin >> N;
    ll sum=0;
    string s;
    cin >> s;
    for(int i=0;i<N;i++){
        sum += ((int)s[i]-48);
    }
    cout << sum;
}