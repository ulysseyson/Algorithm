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
    ll tmp = N;
    ll max, min;
    while(tmp--){
        ll temp;
        cin >> temp;
        if(tmp+1 == N){
            max = temp;
            min = temp;
        }
        else{
            if(temp > max) max = temp;
            else if(temp < min) min = temp;
        }
    }
    cout << min << " " << max;
}