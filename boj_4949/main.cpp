#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
stack<char> bracket;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    string s;
    getline(cin, s);
    while(s != "."){
        
        stack<char> bracket;
        int flag = 1;
        for(auto k : s){
            if(k == '(') bracket.push(k);
            else if(k == '[') bracket.push(k);
            else if(k == ')') {
                if(bracket.empty()) {
                    flag = 0;
                    break;
                }
                else if(bracket.top() == '(') bracket.pop();
                else {
                    flag = 0;
                    break;
                }
            }
            else if(k == ']') {
                if(bracket.empty()) {
                    flag = 0;
                    break;
                }
                else if(bracket.top() == '[') bracket.pop();
                else {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag && bracket.empty()) cout << "yes\n";
        else cout << "no\n";
        cin.clear();
        getline(cin, s);
        }
    }
