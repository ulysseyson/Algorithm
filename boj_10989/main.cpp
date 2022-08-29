#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, tmp;
    int count[10001] = {0};
    cin >> n;
    // 나온 숫자를 count
    while(n--){
        cin >> tmp;
        count[tmp]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=0;j<count[i];j++){
            cout << i << "\n";
        }
    }

}