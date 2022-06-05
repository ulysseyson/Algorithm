#include <bits/stdc++.h>
#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
typedef long long LL;
typedef long long ll;
#define Max_Vortex 1001

int dfs_visited[Max_Vortex] = {0,};
int bfs_visited[Max_Vortex] = {0,};
int dfs_result[Max_Vortex+1] = {0, };
int bfs_result[Max_Vortex+1] = {0, };
int graph[Max_Vortex][Max_Vortex] = {0,};
int main(){

    int N, M, it;
    cin >> N >> M >> it;
    dfs_visited[it-1]=1;
    bfs_visited[it-1]=1;
    dfs_result[0] = it;
    bfs_result[0] = it;
    int now_turn = 1;
    stack<int> s;//현재 노드에서 탐색해야 하는 점들

    while(M--){
        int x, y;
        cin >> x >> y;
        graph[x-1][y-1] = 1; // 연결된 점이면 1 아니면 0
        graph[y-1][x-1] = 1;
    }
    for(int j = N; j>=0; j--){
        if(graph[it-1][j] == 1 && dfs_visited[j] == 0)  {
            s.push(j+1);

        }

    }
    while(!s.empty()){
        int now = s.top();
        if(dfs_visited[now-1] == 0){
            dfs_visited[now-1] = 1;
            dfs_result[now_turn] = now;
            now_turn++;
        }
        s.pop();
        for(int j = N-1; j >= 0; j--){
            if(graph[now-1][j] == 1 && dfs_visited[j] == 0)  {
                s.push(j+1);
            }
        }
    }
    for(int ii = 0; dfs_result[ii]!=0; ii++){
        cout <<  dfs_result[ii] <<" ";
    }
    cout << "\n";


    queue<int> q;//현재 노드에서 탐색해야 하는 점들

    now_turn = 1;
    for(int j = 0; j<N; j++){
        if(graph[it-1][j] == 1 && bfs_visited[j] == 0)  {
            q.push(j+1);
        }
    }
    while(!q.empty()){
        int now = q.front();
        if(bfs_visited[now-1] == 0){
            bfs_visited[now-1] = 1;
            bfs_result[now_turn] = now;
            now_turn++;
        }
        q.pop();
        for(int j = 0; j < N; j++){
            if(graph[now-1][j] == 1 && bfs_visited[j] == 0)  {
                q.push(j+1);
            }
        }
    }
    for(int ii = 0; bfs_result[ii]!=0; ii++){
        cout <<  bfs_result[ii] <<" ";
    }

    return 0;
}
