#include<bits/stdc++.h>

using namespace std;

/**
 * Save primes data. For fast calculation.
 */

vector<int> primes;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;

    primes.push_back(2);
    for(int i =3; i<=N; i++){
        int idx = 0;
        int check = primes[idx];
        int flag_p = true;
        while(check * check <= N){
            if(check != 0){
                if(i%check == 0){
                flag_p = false;
                break;
            }}
            idx++;
            check = primes[idx];
        }
        if(flag_p){
            primes.push_back(i);
        }
    }
    
    for(int p : primes){
        if(p>=M && p<=N){
            cout << p << "\n";
        }
    }
}