#include<bits/stdc++.h>
using namespace std;
priority_queue< pair<int, int> > pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            int tmp;
            cin >> tmp;
            pq.push(make_pair(tmp, i));
        }
        int seq = 1;
        while(pq.top().second != m)
        {
            pq.pop();
            seq++;
        }
        cout << seq << "\n";
        
    }
    
}