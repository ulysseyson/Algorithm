
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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll count = 0;
    getline(cin, s);
    for(int i =0; i<s.length()-1; i++){
        if(s[i] != ' ' && s[i+1] == ' ') {count++;}

    }
    if(s[s.length()-1]!=' ') count++;
    cout << count;
}