#include<bits/stdc++.h>

using namespace std;
vector<pair<int, int>> people;

int main(){
    int n;
    cin >> n;
    // 사람 데이터 입력 받기
    while(n--){
        int x, y;
        cin >> x >> y;

        people.push_back({x,y});
    }
    // for-each 문으로 각 사람에 대해 brute-force
    for(int i=0;i<people.size();i++){
        int rate = 1;
        for(int j=0;j<people.size();j++){
            if(i!=j){
                if(people[i].first < people[j].first && people[i].second < people[j].second) rate++;
            }
        }
        
        cout << rate;
        if(i != people.size()-1) cout << " ";
    }
}