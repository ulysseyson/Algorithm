#include<bits/stdc++.h>

using namespace std;

/**
 * Save primes data. For fast calculation.
 */

vector<int> primes;
int numbers[1003];
int isPrime[1003];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N=1003;
    cin >> M;

    for(int i=0;i<M;i++){
        cin >> numbers[i];
        isPrime[i] = false;
    }

    primes.push_back(2);
    isPrime[2] = true;
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
            isPrime[i] = true;
        }
    }
    
    int count = 0;
    for(int n : numbers){
        if(isPrime[n]) count++;
    }
    cout << count << "\n";
}