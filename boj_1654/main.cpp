#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll k, n;
    cin >> k >> n;
    vector<ll> vrope;
    for(ll i=0;i<k;i++){
        ll tmp;
        cin >> tmp;
        vrope.push_back(tmp);
    }

    sort(vrope.begin(), vrope.end());

    ll start=1;
    ll end = vrope[k-1];
    // cout << "end = " << end << "\n";
    ll mid = (start+end)/2+1;
    // cout << "mid = " << mid << "\n";
    ll count = 0;
    while(start<=end){
        for(ll jj : vrope){
            count += jj/mid;
        }
        if(count >= n){
            start = mid+1;
        }
        else end = mid-1;
        mid = (start+end)/2;
        count = 0;
    }
    cout << mid;
}