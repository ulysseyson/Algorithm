//c++ basic options for ps

#include <bits/stdc++.h>

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
    getline(cin, s);
    //uppercase
    for(int i=0; i<s.size(); i++){
        if(s[i]>= 'a') s[i] = s[i] -32;
    }
    
    // find most frequency
    int freq[26] = {0};

    for(int i=0; i<26; i++){
        freq[i] = count(s.begin(), s.end(), 'A'+i);
    }
    int max1 =0;
    int maxi =0;
    for(int i=0; i<26; i++){
        if(max1 < freq[i]){
            max1 = freq[i];
            maxi = i;
        }
    }
    // Is it ?
    int trigger = 0;
    for(int i=0; i<26; i++){
        if(freq[i] == max1) trigger++;
    }
    if(trigger > 1) cout << "?";
    else cout << (char)('A'+ maxi);

}