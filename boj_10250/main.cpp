#include "bits/stdc++.h"

using namespace std;

int hotel[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(hotel, 0, sizeof(hotel));
    int t;
    cin >> t;
    while(t--) {
        int H, W, N;
        cin >> H >> W >> N;

        int row, col;
        row = N/H;
        col = N%H;
        if(col == 0) col = H;
        N % H == 0 ? row=row : row++;
        cout << col * 100 + row << "\n";
    }
}