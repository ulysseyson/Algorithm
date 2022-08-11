//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y, w, h;

    cin >> x >> y >> w >> h;

    int tmp1 = min(w-x, h-y);
    int tmp2 = min(x, y);
    cout << min(tmp1, tmp2);
}
