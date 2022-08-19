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



ll dp[101][100001] = {0, };
pair<int,int> weight[101];
int value[101];

vector <int> used[101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    ll n, k;
    cin >> n >> k;
    for(int i =1; i<=n; i++){
        int weight, value, number;
        cin >> weight >> value >> number;
        weight[i] = {weight, number};
        value[i] = value;
    }

    for(int i = 1; i<=n ; i++){
        cnt = weight[i].second;
        while(cnt--){
        for(int j=1+(weight[i].second - cnt) * weight[i].first; j<=k; j++){
                if(j<weight[i].first)  dp[i][j] = dp[i-1][j];
                else dp[i][j] = max(dp[i-1][j], dp[i-1][j-package[i].first]+package[i].second);
            }

        }
    }
    cout << dp[n][k];
    return 0;
}
