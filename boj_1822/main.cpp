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


set <int> a;
set <int> b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int na, nb;
    cin >> na >> nb;

    while(na--){
        int aelem;
        cin >> aelem;
        a.insert(aelem);
    }
    while(nb--){
        int belem;
        cin >> belem;
        b.insert(belem);
    }
    for_each(b.begin(), b.end(), [](int n) {
        a.erase(n);
    });
    cout << a.size() << "\n";
    if(!a.empty()){
        for_each(a.begin(), a.end(), [](int n){
            cout << n << " ";
        });
    }
    return 0;
}
