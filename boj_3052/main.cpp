//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int numArr[10];
    set<int> remain;
    for(int i=0;i<10;i++){
        int tmp;
        cin >> tmp;
        tmp %= 42;
        remain.insert(tmp);
    }
    cout<<remain.size();    
}