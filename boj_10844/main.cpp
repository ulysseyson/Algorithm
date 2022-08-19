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

ll dp[11][101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    dp[10][1] = 9;
    for(int i = 0; i<=9; i++){
        dp[i][1] = 1;
    }

    for(int i =2; i < 101; i++){
        for(int j =1; j<9; j++){
            dp[j][i] = (dp[j-1][i-1] + dp[j+1][i-1]) % 1000000000;
        }
        dp[0][i] = dp[1][i-1];
        dp[9][i] = dp[8][i-1];
        for(int j =1; j<10; j++){
            dp[10][i] = (dp[10][i] + dp[j][i]) % 1000000000;
        }
    }
    cout << dp[10][N];
}
