#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin>> M >> N;
    char board[M][N];
    for(int i =0;i<M; i++){
        for(int j=0;j<N;j++){
            cin >> board[i][j];
        }
    }
    int countMax = 64;
    for(int i=0;i<M-7;i++){
        for(int j=0;j<N-7;j++){
            int w_count = 0;
            char bb = 'W';
            char tmp = bb;
            for(int x=0;x<8;x++){
                for(int y=0;y<8;y++){
                    if((x+y)%2) tmp = bb-21;
                    else tmp = bb;   
                    if(board[i+x][j+y] != tmp)  w_count++;
                }
            }
            int b_count = 0;
            bb = 'B';
            tmp = bb;
            for(int x=0;x<8;x++){
                for(int y=0;y<8;y++){
                    if((x+y)%2) tmp = bb+21;
                    else tmp = bb;    
                    if(board[i+x][j+y] != tmp)  b_count++;
                }
            }
            if(w_count<countMax) countMax = w_count;
            if(b_count<countMax) countMax = b_count;
        }
    }
    cout << countMax;
}