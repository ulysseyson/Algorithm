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
    int C, m=0;
    cin >> C;
    
    while(C--){
        cin >> s;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s.substr(i, 3) == "for"){
                count++;
            }
            else if(s.substr(i, 5) == "while"){
                count++;
            }
        }
        m = max(m, count);
    }
    cout <<

}