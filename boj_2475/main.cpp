//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll num[6]={0};
    for(int i=0; i<5; i++){
        cin >> num[i];
    }
    for(int i=0; i<5; i++){
        num[5] += num[i] * num[i];
    }
    cout << num[5]%10;
}