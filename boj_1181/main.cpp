#include<bits/stdc++.h>
using namespace std;

struct comp
{
    bool operator()(const string &a, const string &b) const
    {
        if (a.size() < b.size()) { 
            return true;
        }
        else if (a.size() > b.size()) {
            return false;
        }
        else {
            return a.compare(b) < 0;
        }
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<string, comp> ss;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        ss.insert(s);
    }
    for(string s : ss){
        cout << s << "\n";
    }
}
