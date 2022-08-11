#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
vector<ll> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll N;
    cin >> N;

    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for(int k : v){
        cout << k << "\n";
    }
}