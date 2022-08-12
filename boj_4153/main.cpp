#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int cards[300001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    int a, b, c;
    while(true){
        cin >> a >> b >> c;
        if(a==0&&b==0&&c==0){
            break;
        }
        int maxL = max(a, max(b, c));
        int minL = min(a, max(b, c));
        int middleL;
        if(a != maxL && a != minL){
            middleL = a;
        }
        else if(b != maxL && b != minL){
            middleL = b;
        }
        else middleL = c;

        if(maxL*maxL == middleL*middleL + minL*minL){
            cout << "right" << "\n";
        }
        else cout << "wrong" << "\n";
    }    
}