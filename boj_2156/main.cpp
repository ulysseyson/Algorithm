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

ll podo[10001];
ll dp[10001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> podo[i];
    }
    dp[1] = podo[1];
    dp[2] = dp[1] + podo[2];

    for(int i =3; i<= n; i++){
        dp[i] = dp[i-1]; // 안마시기
        ll tmp = max(dp[i-2], dp[i-3]+podo[i-1]) + podo[i]; //i번째 포도주 마신느 경우
        dp[i] = max(dp[i], tmp);
    }

//    for(int i = 1; i<=2; i++){
//        for(int j = 1; j<= n; j++){
//            cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
// 두칸 이상 넘어가도 최대...

    cout << dp[n] << "\n";
}
