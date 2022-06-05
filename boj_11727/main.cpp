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

ll tile_case[1001];

ll tile(ll n){
    if(tile_case[n]!= 0){
        return tile_case[n];
    }
    else {
        ll tmp = (tile(n-1) + 2*tile(n-2)) % 10007;
        tile_case[n] = tmp;
        return tmp;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tile_case[1] = 1;
    tile_case[2] = 3;
    ll n;
    cin >> n;
    cout << tile(n);

    return 0;
}
