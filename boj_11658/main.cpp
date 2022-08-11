
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int Board[1025][1025];
int preSum[1025][1025];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> Board[i][j];
            if(i==0 & j== 0){
                preSum[i][j] = Board[i][j];
            }
            else if(i == 0) preSum[i][j] = preSum[i][j-1] + Board[i][j];
            else if(j == 0) preSum[i][j] = preSum[i-1][j] + Board[i][j];
            else{
                preSum[i][j] = 
                    preSum[i-1][j] +
                    preSum[i][j-1] -
                    preSum[i-1][j-1] +
                    Board[i][j];
            }
        }
    }
    while(M--){
        int w, x1, y1, x2, y2, c;
        cin >> w;
        if(w==1){
            cin >> x1>> y1>>x2>> y2;
            int res = 0;
            if(x1 == x2 && y1 == y2) {
                res = 
                    preSum[x1-1][y1-1]+
                    preSum[x1-2][y1-2]-
                    preSum[x1-1][y1-2]-
                    preSum[x1-2][y1-1];
            }
            else if(x1 == x2){
                res = 
                    preSum[x2-1][y2-1] -
                    preSum[x2-1][y1-2] -
                    preSum[x2-2][y2-1] +
                    preSum[x2-2][y1-2];
            }
            else if(y1 == y2){
                res = 
                    preSum[x2-1][y2-1] -
                    preSum[x1-2][y2-1] -
                    preSum[x2-1][y2-2] +
                    preSum[x1-2][y2-2];
            }
            else{
                res = 
                    preSum[x2-1][y2-1] -
                    preSum[x2-1][y1-2] -
                    preSum[x1-2][y2-1] +
                    preSum[x1-2][y1-2];
            }
            cout << res << "\n";
        }
        else{
            cin >> x1>> y1>> c;
            int diff = c - Board[x1-1][y1-1];
            for(int i= x1-1;i<N;i++){
                for(int j=y1-1;j< N;j++){
                    preSum[i][j] += diff;
                }
            }
        }
    }
}