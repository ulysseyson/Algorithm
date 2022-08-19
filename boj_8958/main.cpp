//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int base_score = 1;
        string solve;
        cin >> solve;
        int score = 0;
        for(int i=0;i<solve.size();i++){
            if(solve[i] == 'O'){
                score += base_score;
                base_score++;
            }
            else base_score = 1;
        }
        cout << score << "\n";
    }
}