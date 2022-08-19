#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
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

ll arr[100001];
ll dp[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, tmp;
    cin >> n;
    tmp = n;
    while(tmp--){
        cin >> arr[n-tmp];
    }
    dp[1] = arr[1];
    for(int i=2; i<=n; i++){

    }


}
