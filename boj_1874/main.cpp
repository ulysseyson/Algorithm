#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int num[n];
    vector<char> str;
    stack<int> st;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int idx = 0;
    for(int i=1; i<=n;i++){
        st.push(i);
        str.push_back('+');

        while(!st.empty() && st.top() == num[idx]){
            idx++;
            st.pop();
            str.push_back('-');
        }
    }
    if(!st.empty()) cout << "NO" << "\n";
    else{
        for(auto k : str) cout << k <<"\n";
    }
}