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
const int divis = 10007;
ll dp[12][1006];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    dp[10][1] = 10;
    for(int i = 0; i<=9; i++){
        dp[i][1] = 1;
    }
    for(int i =2; i <= 1000; i++){
        for(int j =0; j<=9; j++){
            for(int k = j; k<=9; k++){
                dp[j][i] = (dp[j][i] + dp[k][i-1]) % divis;
            }
        }


        for(int j =0; j<10; j++){
            dp[10][i] = (dp[10][i] + dp[j][i]) % divis;
        }
    }

    cout << dp[10][N];
}
