//c++ basic options for ps

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

ll sticker[3][100001];
ll dp[3][100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        for(int i = 1; i<=n; i++){
            cin >> sticker[1][i];
        }
        for(int i = 1; i<=n; i++){
            cin >> sticker[2][i];
        }

        dp[1][1] = sticker[1][1];
        dp[2][1] = sticker[2][1];
        dp[1][2] = dp[2][1] + sticker[1][2];
        dp[2][2] = dp[1][1] + sticker[2][2];

        int diff1;
        int diff2;
        for(int j = 3; j<=n; j++){
            dp[1][j] = max(dp[2][j-1], max(dp[2][j-2], dp[1][j-2])) + sticker[1][j];
            dp[2][j] = max(dp[1][j-1], max(dp[1][j-2], dp[2][j-2])) + sticker[2][j];
        }
        cout << max(dp[1][n], dp[2][n]) << "\n";
    }

}
