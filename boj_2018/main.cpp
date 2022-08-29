#include <bits/stdc++.h>
using namespace std;

vector<int> num;
bool cmp(const pair<int, int> a, const pair<int, int> b)  {
        if(a.first == b.first) return a.second < b.second;
        else return a.first > b.first;
    }

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);

    int n;
    cin>>n;
    int tmpp = n;
    // 수 입력
    while(tmpp--){
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }

        sort(num.begin(), num.end());
        // 산술평균
        double sum=0;
        for(int i : num){
            sum += i;
        }
        cout << floor(sum/n + 0.5) << "\n";

        // 중앙값
        vector<int>::iterator it;
        it = num.begin();
        for(int i=0; i<n/2; i++){
            it++;
        }
        cout << *it << "\n";

        // 최빈값
        // ? 현재 오름차순 정렬 -> 거꾸로 넣으면 내림차순 정렬!
        // ! 정렬을 set에 의존하지 말자.. 은근히 오래걸림(insert가 !)
        // pair(빈도수, 수)

        map<int, int> m;
        it = num.begin();

        if(num.size()==1) m.insert({num[0], 1});
        else {
            for(;it!=num.end();it++) {
                if(m.find(*it) != m.end()) m[*it]++;
                else m.insert({(*it), 1});
            }
        }
        vector<pair<int, int>> v;
        for(auto k: m) {
            v.push_back({k.second, k.first});
        }

        sort(v.begin(), v.end(), cmp);
        // for(auto k: v){
        //     cout << k.first << " " << k.second <<"\n";
        // }

        if(v.size()==1) cout << (*v.begin()).second <<"\n";
        else if((*v.begin()).first == (*(v.begin()+1)).first) cout << (*(v.begin()+1)).second <<"\n";
        else cout << (*(v.begin())).second << "\n";
        // 최대최소 사이
        cout << *(num.end()-1) - *num.begin() << "\n";
    
}