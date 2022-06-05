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

int coin[101];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    ll dp[10001] = {0, };
    ll n, k;
    cin >> n >> k;

    for(int i =1; i<=k; i++){
        dp[i]=10001;
    }

    for(int j = 1; j<=n; j++){
        cin >> coin[j];
        for(int l = coin[j]; l<=k; l++){
            dp[l] = min(dp[l], dp[l-coin[j]]+1);
        }
    }
    if(dp[k] == 10001)  cout << "-1\n";
    else cout << dp[k];
    return 0;
}
