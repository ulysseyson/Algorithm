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



ll dp[2021][10001] = {0, };
int weight[2021];
int value[2021];
vector <int> used[101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    ll n, k;
    cin >> n >> k;
    int index =0;
    for(int i =1; i<=n; i++){
        int weight1, value1, number1;
        cin >> weight1 >> value1 >> number1;
        for(int j =0; number1 >0;j++){
            index++;
            int tmp = min(1<<j, number1);
            weight[index] = weight1 * tmp;
            value[index] = value1 * tmp;
            number1-=tmp;
        }

    }
    for(int i = 1; i<=index ; i++){
        for(int j=1; j<=k; j++){
            if(j<weight[i])  dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j] , dp[i-1][j-weight[i]] + value[i]);

            }
        }
    }
    for(int i = 0; i<=index ; i++){
        for(int j=0; j<=k; j++){
                cout <<dp[i][j] <<" ";

        }
        cout << "\n";
    }

    cout << dp[index][k];
    return 0;
}
