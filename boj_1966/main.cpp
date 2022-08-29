#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {   
        
        queue< pair <int, int>> q;
        int n, m;
        cin >> n >> m;
        int doc[101];
        for(int i=0; i<n; i++)
        {
            cin >> doc[i];
            q.push(make_pair(doc[i], i));
        }
        int seq = 1;
        // 빌떄까지 한번에 한번 출력
        while(!q.empty())
        {
            // q를 전부 탐색하면서 중요도 최대값을 탐색
            int max = 0;
            for(int i=0; i<q.size(); i++)
            {
                if(max < q.front().first){
                    max = q.front().first;
                }
                pair<int, int> tmp = q.front();
                q.pop();
                q.push(tmp);
            }
            //최대값이 나올때까지 pop & push
            while(q.front().first!=max){
                pair<int, int> tmp = q.front();
                q.pop();
                q.push(tmp);
            }
            if(q.front().second == m) break;
            else q.pop();
            seq++;
        }
        cout << seq << "\n";
    }
    
}