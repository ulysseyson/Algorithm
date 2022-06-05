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

map<char, int> str_to_base;
map<int, char> base_to_str;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll i, m, n;
    string s, tmp, ans;
    cin >> m;
    cin >> n;
    cin >> s;

    bitset<8> bits;

    for(i=0; i<26; i++){
        if(i<10) str_to_base.insert(make_pair('0'+i, i));
        str_to_base.insert(make_pair('a'+i, 10+i));

        base_to_str.insert(make_pair(10+i, 'a'+i));
        if(i<10) base_to_str.insert(make_pair(i, '0'+i));
    }


    for(char k : s){
        bits = k;
        tmp = tmp +  bits.to_string();
    }

    cout << tmp;



    return 0;
}
