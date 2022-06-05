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

int arr[1001];
ll dp[1001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i =1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i<=n; i++){
        dp[i] = 1;
        for(int k = 1; k<i; k++){
            if(arr[k]< arr[i])  dp[i] = max(dp[i], dp[k]+1);
        }
    }
    ll result = 1;
    for(int i = 1; i<=n; i++){
        result = max(result, dp[i]);
    }
    cout << result;
}
//얘는 끝나는 걸 dp[i]로
// dp[i]가 i까지의 수열의 lis길이로 하게하는 방법은?
