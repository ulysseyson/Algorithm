#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

unordered_map<ll, ll> um;
vector<int> find_number;
vector<int>::iterator it;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M;
    while(M--){
        ll tmp;
        cin >> tmp;
        if(um.find(tmp) != um.end()){
            um[tmp]++;
        }
        else um.insert(make_pair(tmp, 1));
    }
    cin >> N;
    while(N--){
        int tmp;
        cin >> tmp;
        find_number.push_back(tmp);
    }

    for(it = find_number.begin(); it != find_number.end(); it++){
        cout << um[*it];

        if(it != find_number.end()-1) cout << " ";
    }


}