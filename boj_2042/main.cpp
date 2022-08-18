#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


long long tree[4000001];
long long v[1000001];

long long init(int node, int s, int e)
{
    if(s==e){ return tree[node]=v[s]; }
    int mid=s + e >> 1;
    return tree[node]=init(node*2, s, mid)+init(node*2+1, mid+1, e);
}
long long sum(int node, int s, int e, int l, int r)
{
    if(l>e || r<s){ return 0; }
    if(l<=s && e<=r){ return tree[node]; }
    int mid=s + e >> 1;
    return sum(node*2, s, mid, l, r)+sum(node*2+1, mid+1, e, l, r);
}

void update(int node, int s, int e, int idx, long long val)
{
    if(idx<s || idx>e){ return; }
    if(s==e){ tree[node]=val; return; }
    int mid=s + e >> 1;
    update(node*2, s, mid, idx, val);
    update(node*2+1, mid+1, e, idx, val);
    tree[node]=tree[node*2]+tree[node*2+1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M >> K;

    for(int i = 1; i <= N; i++){
        cin >> v[i];
    }
    init(1, 1, N);
    for(int i = 0; i < M+K; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1){
            update(1, 1, N, b, c);
            v[b] = c;
        }
        else{
            cout << sum(1, 1, N, b, c) << "\n";
        }
    }
}