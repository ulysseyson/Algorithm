#include <bits/stdc++.h>

using namespace std;    
int N;
int dest[100005];
int biSearch(int target){
    int low = 0;
    int high = N-1;
    int mid;

    while(low <= high){
        mid = (low + high)/2;
        if(dest[mid] == target){
            return mid;
        }
        else if(dest[mid] > target){
            high = mid-1;
        }
        else low = mid+1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M;
    vector<int> B;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> dest[i];
    }
    cin >> M;
    for(int i=0;i<M;i++){
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }
    sort(dest, dest+N);
    for(int k : B){
        if(biSearch(k) != -1) cout << "1\n";
        else cout << "0\n";
    }

}