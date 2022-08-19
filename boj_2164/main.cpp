#include <bits/stdc++.h>
#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
typedef long long LL;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<ll> q;

    ll n;
    cin >> n;
    ll tmp = 1;
    while(tmp <= n){
        q.push(tmp);
        tmp ++;
    }
    while(q.size() != 1){
        q.pop();
        ll t = q.front();
        q.pop();
        q.push(t);
    }
    cout << q.front() << endl;
    return 0;
}
