//c++ basic options for ps

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<double> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i]; 
    }
    int MaxScore = *max_element(v.begin(), v.end());
    for(int i=0; i<N; i++){
        v[i] = v[i] / MaxScore * 100;
    }
    double sum=0, avg=0;
    for(int i=0; i<N; i++){
        sum += v[i];
    }
    avg = sum / N;
    cout << avg;
}