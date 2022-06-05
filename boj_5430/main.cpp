//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;


deque<string> split(string str, char delim){
    
    deque<string> dq;

    int prev=0, curr=0;
    str = str.substr(1, str.size()-2);
    curr = str.find(delim);
    while(curr != string::npos){
        string substr = str.substr(prev, curr-prev);
        dq.push_back(substr);
        prev = curr + 1;
        curr = str.find(delim, prev);
    }
    dq.push_back(str.substr(prev, curr-prev));
    
    return dq;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--){
        string p, arr;
        deque<string> dq;
        int n;
        cin>> p >> n;
        cin >> arr;
        dq = split(arr, ',');
        if(n < count(p.begin(), p.end(), 'D')) cout << "error\n";
        else{
            int flag = 1; //정방향 역방향
            for(int i=0; i<p.size(); i++){
                if(p[i] =='R'){
                    flag = (flag+1) % 2;
                }
                else{
                    if(flag) dq.pop_front();
                    else dq.pop_back();
                }
            }
            cout << "[";
            if(!flag) reverse(dq.begin(), dq.end());
            for(int i=0; i<dq.size();i++){
                cout << dq[i];
                if(i!=dq.size()-1) cout << ",";
            }
            cout << "]\n";
        }
    }
}