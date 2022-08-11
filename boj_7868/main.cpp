#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

#define pb(x) push_back(x)
#define all(x) (x).begin(), (x).end()

// 문제의 조건이 출력하는 수가 10^18 이하이다 인데,
// 2 ^ 60 = 10 ^ 18 이여서, 지수를 60까지만 생각해도 충분
// 즉 p1^k1 * p2^k2 * p3^k3 (k1, k2, k3 <= 60) 을 set에 넣어주면 된다.

set <ll> s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll p1, p2, p3, i, a, b, c;
    cin >> p1 >> p2 >> p3 >> i;
    const int max_expo = 60;
    for(int i=0; i<max_expo; i++){
        a = pow(p1, i);
        s.insert(a);
        for(int j=0; j<max_expo; j++){
            b = pow(p2, j);
            s.insert(b);
            c = a*b;
            for(int k=0; k<max_expo; k++){
                if(i+j+k > max_expo) break;

                s.insert(c*pow(p3, k));
            }
        }
    }
    cout << " i = "<< i << "\n";
    int tmp = -1;
    for(auto k : s){
        if(i==tmp) {
            cout<<k;
            break;
        }
        tmp++;
    }
    return 0;
}
