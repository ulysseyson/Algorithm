#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> fibonacci;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int T;
    cin >> T;
    fibonacci.push_back({1,0});
    fibonacci.push_back({0,1});
    for(int i=2;i<50;i++){
        fibonacci.push_back({fibonacci[i-2].first+fibonacci[i-1].first,
                            fibonacci[i-2].second+fibonacci[i-1].second});
    }
    while(T--){
        int N;
        cin >> N;
        cout << fibonacci[N].first << " " <<fibonacci[N].second << "\n";
    }
}