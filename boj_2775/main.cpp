#include<bits/stdc++.h>
using namespace std;

int peo[15][15];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    int T;
    cin >> T;
     for(int i=0;i<15;i++){
        for(int j=1;j<15;j++){
            if(i==0){
                peo[i][j] = j;
            }
            else if(j==0){
                peo[i][j] = 1; 
            }
            else {
                peo[i][j] = peo[i-1][j] + peo[i][j-1];
            }
        }
    }

    while(T--){
        int k, n;
        cin >> k >> n;

        cout << peo[k][n] << "\n";
    }
}