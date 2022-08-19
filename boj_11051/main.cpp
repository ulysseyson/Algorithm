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

ll binom[1001][1001];

ll binomial(int N, int K){
    if(binom[N][K] != 0)   {
        return binom[N][K];
    }
    else {
        ll tmp = (binomial(N-1, K) + binomial(N-1, K-1))%10007;
        binom[N][K] = tmp;
        return tmp;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    binom[1][1] = 1;
    binom[1][0] = 1;

    int n, k;
    cin >> n >> k;

    for(int i = 0; i<=n; i++){
        binom[i][0] = 1;
        binom[i][i] = 1;
    }
    cout << binomial(n, k);
    return 0;
}
