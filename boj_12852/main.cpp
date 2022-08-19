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

int dp[1000001];
int route[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int N;
    cin >> N;
    dp[1] = 0;
    for(int i =2; i<=N; i++){
        dp[i] = N+1;
    }
    for(int i=2; i<=N; i++){
        dp[i] = min(dp[i-1]+1, dp[i]);
        if(i%2 == 0) dp[i] = min(dp[i/2]+1, dp[i]);
        if(i%3 == 0) dp[i] = min(dp[i/3]+1, dp[i]);
        if(i%3 == 0 && dp[i] == dp[i/3]+1)  route[i] = 3;
        else if(i%2 == 0 && dp[i] == dp[i/2]+1)  route[i] = 2;
        else route[i] = 1;
    }
    cout << dp[N]<< "\n";
    route[1] = 0;
    cout << N ;
    while(route[N] != 0){
        cout << " ";
        if(route[N] == 3){
            N/=3;
            cout << N;
        }
        else if(route[N] == 2){
            N/=2;
            cout << N;
        }
        else {
            N-=1;
            cout << N;
        }
    }
    return 0;
}
