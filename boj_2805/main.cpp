#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
vector<int> forest;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll n, m;
    cin >> n >> m;

    while(n--){
        ll tmp;
        cin >> tmp;
        forest.push_back(tmp);
    }

    ll start = 0;
    ll end = *max_element(forest.begin(), forest.end());
    ll mid = (start + end)/2;
    while(start+1<end){
        ll sum = 0;
        for (ll tree: forest){
            if(tree > mid) sum += (tree-mid);
        }
        if(sum >= m) {
            start = mid;
            mid = (start+end)/2;
        }
        else {
            end = mid;
            mid = (start+end)/2;
        }
    }
    cout << start;
}