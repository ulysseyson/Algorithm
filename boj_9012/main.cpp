#include "bits/stdc++.h"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        
        stack<int> vps;
        int flag = 0;
        
        string s;
        cin >> s;

        for(int i=0; i<s.length();i++){
            if(s[i] == '(') vps.push(1);
            else if(!vps.empty()) vps.pop();
            else flag = 1;
        }
        if(!vps.empty()|| flag == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}