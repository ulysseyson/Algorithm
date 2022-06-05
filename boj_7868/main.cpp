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


set <ll> s;
set<ll> ::iterator it;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll p1, p2, p3, i;
    cin >> p1 >> p2 >> p3 >> i;
    ll t1 = min(p1, min(p2, p3));

    ll t3 = max(p1, max(p2, p3));
    ll t2 =0 ;
    if(p1 != t1 && p1 != t3) t2 = p1;
    else if (p2 != t1 &&p2 != t3) t2 = p2;
    else t2 = p3;

    ll temp = 1;
    int ith = 0;
    s.insert(t1);
    s.insert(t2);
    s.insert(t3);
    int num == 0;
    while(num < i){
        if(s.find(temp * t1) == s.end()){
            s.insert(temp * t1);
            break;
        }
        else if (s.find(temp*t2) == s.end()){
            s.insert(temp *t2);
            break;
        }
        else s.insert(temp *t3);
        int tt = 1 + ith;
        for(auto k:s){
            if(ith--==0) {
                temp = k;
                cout << temp<<"\n";
                break;
            }
        }
        ith = tt;
    }
    for(auto k : s){
        if(i--==1) {
            cout<<k;
            break;
        }
    }
    return 0;
}
