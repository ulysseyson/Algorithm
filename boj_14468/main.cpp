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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;

    ll i, j, k;
    string n;
    cin >> n;

    s.push(11);
    s.push(22);
    s.push(33);

    cout << s.top();
 //   for (i = 0; i < n.size(); i++) {
   //         cin>> j >> k;
    //        if(m.find(j)==m.end())  m.insert(pair<int, int>(j, k));
   //         else{
    //            if(m[j]!=k){
    //                count++;
      //              m[j]=k;
    //            }
   //         }
   //     }
  //  cout << count;
    return 0;
}
