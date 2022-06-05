//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long LL;
const int D = 1e9+7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N, diff=0;
    cin >> N;
    while(N--){
        ll coef, degree;
        cin >> coef >> degree;
        ll x = 2, q = degree-1, t = 1;

        while(q){
            if(q&1) t = t*x % D;
            x = x * x % D;
            q /= 2; 
        }
        if(degree) diff = (diff + (degree * coef) % D * t) % D;
    }
    cout << diff;
}