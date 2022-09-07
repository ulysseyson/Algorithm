#include<bits/stdc++.h>
using namespace std;

int farm[51][51];
queue<pair<int, int>> task;
int checkBoundary(int x, int y){
    if(x<0 || y <0) return 0;
    else return 1;
}
int wormMoveCheck(int x, int y){
    if(checkBoundary(x, y+1)){
        if(farm[x][y+1]){
            farm[x][y+1]=0;
            task.push({x, y+1});
        }
    }
    if(checkBoundary(x, y-1)){
        if(farm[x][y-1]){
            farm[x][y-1]=0;
            task.push({x, y-1});
        }
    }
    if(checkBoundary(x+1, y)){
        if(farm[x+1][y]){
            farm[x+1][y]=0;
            task.push({x+1, y});
        }
    }
    if(checkBoundary(x-1, y)){
        if(farm[x-1][y]){
            farm[x-1][y]=0;
            task.push({x-1, y});
        }
    }
    return 0;
}
void wormMove(int x, int y){
    task.push({x, y});
    farm[x][y]=0;
    while(!task.empty()){
        wormMoveCheck(task.front().first, task.front().second);
        task.pop();
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie();

    int T;
    cin >> T;

    while(T--){
        //밭 reset
        for(int i=0;i<51;i++){
            for(int j=0;j<51;j++){
                farm[i][j] = 0;
            }
        }

        int n,m, k;
        cin >> n >> m >> k;
        
        //배추 위치 입력
        while(k--){
            int i,j;
            cin >> i >> j;
            
            farm[j][i] = 1;
        }

        // 지렁이 수 count
        int cnt=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(farm[i][j]){
                    cnt++;
                    wormMove(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }
}