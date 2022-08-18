#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        q.push(i);
    }
    cout << "<";
    while(!q.empty()){
        for(int i = 0; i < K-1; i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        int x = q.front();
        q.pop();
        cout << x+1;
        if(!q.empty()) cout << ", ";
    }
    cout << ">";
}