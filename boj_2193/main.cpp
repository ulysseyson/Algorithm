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
ll dp[100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;

    for(int i =3; i <= 100; i++){
        for(int j = 0; j<=i-2; j++){
            dp[i] += dp[j];
        }
    }

    cout << dp[N];
}
