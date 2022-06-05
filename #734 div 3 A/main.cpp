#include <bits/stdc++.h>
#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
typedef long long ll;
typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
#define pb(x) push_back(x)
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) {
    if (a && b) return a * (b / gcd(a, b));
    return a + b;
}
ll POW(ll a, ll b, ll rem) {
    ll p = 1;
    for (; b; b /= 2, a = (a * a) % rem)
        if (b & 1) p = (p * a) % rem;
    return p;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;

    ll t, i, j, b1, b2;

    cin >> t;
    for(i=0; i< t; i++){
        cin >> j;
        b1 = j /3;
        b2 = j /3;
        if(j%3==1)  b1+=1;
        else if(j%3 == 2) b2 +=1;

        cout << b1 << " " << b2;
        cout << "\n";
    }
    return 0;
}
