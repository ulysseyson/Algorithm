#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> num;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;

    while(k--){
        ll tmp;
        cin >> tmp;
        if(tmp==0){
            num.pop_back();
        }
        else num.push_back(tmp);
    }
    ll sum = 0;
    for(auto k : num){
        sum += k;
    }
    cout << sum;
}