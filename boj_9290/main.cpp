//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int asc[8]={1,2,3,4,5,6,7,8};
    int desc[8]={8,7,6,5,4,3,2,1};

    int flag =0;
    for(int i=0; i<8; i++){
        int temp;
        cin >> temp;
        if(asc[i]==temp) flag +=2;
        else if(desc[i]==temp) flag +=17;
    }
    if(flag==16) cout << "ascending";
    else if(flag==136) cout << "descending";
    else cout << "mixed";
}