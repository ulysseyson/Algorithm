#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a, b, v;
    cin >> a >> b >> v;

    cout << (v-a)/(a-b) + ((v-a)%(a-b) != 0) +1;
}