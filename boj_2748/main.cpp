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

ll fibb[100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    fibb[0] =0;
    fibb[1] =1;
    int i;
    cin >> i;
    if(i==0 || i==1){
        cout << fibb[i];
    }
    else{
        for(int j = 2; j<= i; j++){
            fibb[j] = fibb[j-1] + fibb[j-2];
        }
        cout << fibb[i];
    }
    return 0;
}
