#include <bits/stdc++.h>
#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
typedef long long LL;
typedef long long ll;
#define Max_Size 1000+1

queue<pair<int, int>> q;
int tomato[Max_Size][Max_Size];
int main(){


    queue<pair<int, int>> q;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;
    for (int i=0; i<y; i++){
        for (int j=0; j< x; j++){
            int stat;
            cin >> stat;
            tomato[i][j] = stat;
            if(stat == 1){
                q.push({i, j});
            }
        }
    }

    while(!q.empty()){
        int dy = q.front().first;
        int dx = q.front().second;
        q.pop();
        if(tomato[dy+1][dx] == 0 && (dy+1) <y){
            tomato[dy+1][dx] = tomato[dy][dx]+1;
            q.push({dy+1, dx});
        }
        if(tomato[dy-1][dx] == 0 && (dy > 0)){
            tomato[dy-1][dx] = tomato[dy][dx]+1;
            q.push({dy-1, dx});
        }
        if(tomato[dy][dx+1] == 0 && (dx+1) <x){
            tomato[dy][dx+1] = tomato[dy][dx]+1;
            q.push({dy, dx+1});
        }
        if(tomato[dy][dx-1] == 0 && (dx >0)){
            tomato[dy][dx-1] = tomato[dy][dx]+1;
            q.push({dy, dx-1});
        }
    }

    int result = 0;
    int no = 0;
    for(int i =0; i<y; i++){
        for(int j =0; j<x; j++){
            if(tomato[i][j] == 0){
                cout << "-1\n";
                return 0;
            }
            else{
                if(result < tomato[i][j]){
                    result = tomato[i][j];
                }
            }
        }
    }
    cout << result-1;
    return 0;
}
