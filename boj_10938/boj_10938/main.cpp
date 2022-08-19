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
    int l = s.size();
    bitset<8> bits;

    for(i=0; i<26; i++){
        str_to_base32.insert(make_pair('A'+i, i));
        if(i<6) str_to_base32.insert(make_pair('2'+i, 26+i));
        base32_to_str.insert(make_pair(i, 'A'+i));
        if(i<6) base32_to_str.insert(make_pair(26+i, '2'+i));
    }

    for(i=0; i<l; i++){
        bits = s[i];
        tmp = tmp +  bits.to_string();
    }
    cout << tmp;

    ll q = l*8/5;
    ll rem = (l*8)%5;

    for(i=0; i<l*8; i+=5){
        if(rem != 0 && i==q*5){
            j=0; ll t = 16;
            for(k=0;k<rem; k++) {
                j+=(tmp[i+k]-48)*t;
                t/=2;
            }
        }
        else j=(tmp[i]-48)*16+(tmp[i+1]-48)*8+(tmp[i+2]-48)*4+(tmp[i+3]-48)*2+(tmp[i+4]-48)*1;
        ans += base32_to_str[j];
    }
    l = ans.size();
    l = l%8;

    if( l == 0 ){
        cout << ans;
    }
    else{
        for(i=0; i<8 - l%8; i++){
            ans+= '=';
        }
        cout << ans;
    }

    return 0;
}
