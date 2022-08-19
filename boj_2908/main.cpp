//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b, a_r=0, b_r=0;
    cin >> a>> b;
    int t=100;
    for(int i=0; i<3; i++){
        a_r += t*(a%10);
        b_r += t*(b%10);
        a/=10;
        b/=10;
        t/=10;
    }
    cout << max(a_r, b_r);

}