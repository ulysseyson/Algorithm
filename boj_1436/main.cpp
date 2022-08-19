#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int> apo;

    for(int i=0;i<10000;i++){
        apo.insert(i*1000+666);
    }
    for(int i=0;i<1000;i++){
        for(int j=0;j<10;j++){
            apo.insert(i*10000+6660+j);
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            apo.insert(i*100000+66600+j);
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<1000;j++){
            apo.insert(i*1000000+666000+j);
        }
    }
    for(int i=0;i<1000;i++){
        apo.insert(6660000+i);
    }
    int N;
    cin >> N;
    int i =1;
    for(int k : apo){
        if(i==N){
            cout << k;
            break;
        }
        else i++;
    }
}