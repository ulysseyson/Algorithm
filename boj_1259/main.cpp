#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string N;
    cin >> N;

    while(N != "0"){
        int flag = 0;
        if(N.size()==1){
            cout << "yes\n";
            cin >> N;
        }
        else{
            for(int i=0;i<N.size()/2;i++){
                if(N[i] != N[N.size()-i-1]) {
                    flag = 0;
                    break;
                }
                else flag = 1;
            }
            if(flag == 0) cout << "no\n";
            else cout << "yes\n";
            cin >> N;
        }
    }
}