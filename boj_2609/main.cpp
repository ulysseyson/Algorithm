#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) {
    if (a && b) return a * (b / gcd(a, b));
    return a + b;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll M, N;
    cin >> M >> N;
    
    cout << gcd(M, N) << "\n" << lcm(M, N) << "\n";
}