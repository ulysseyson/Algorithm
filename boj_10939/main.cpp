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

map<char, int> str_to_base32;
map<int, char> base32_to_str;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, k;
    string s, tmp, ans;
    cin >> s;
    ll sum;
    bitset<8> bits;

    for(i=0; i<26; i++){
        str_to_base32.insert(make_pair('A'+i, i));
        if(i<6) str_to_base32.insert(make_pair('2'+i, 26+i));
        base32_to_str.insert(make_pair(i, 'A'+i));
        if(i<6) base32_to_str.insert(make_pair(26+i, '2'+i));
    }

    for(char k :s){
        int tmp = str_to_base32[k];
        sum = sum * 32 + tmp;
    }

    while(sum > 0){
        ans += (char)(sum%256);
        cout << ans << "\n";
        sum = sum /256;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
