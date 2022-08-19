//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, R;
    cin >> T;
    string s;
    while(T--){
        cin >> R >> s;
        string r="";
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<R; j++){
                r += s[i];
            }
        }
        cout << r <<"\n";
    }
}