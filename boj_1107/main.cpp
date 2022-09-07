#include<bits/stdc++.h>
using namespace std;

int channel[10000002] = {0,};
//고장나면 1
int err_button[10] = {0,};
int main(){
    int n, m;
    cin >> n >> m;
    while(m--) {
        int tmp;
        cin >> tmp;
        err_button[tmp] = 1;
    }

    // 누를 수 있는 채널 check
    for(int i=0;i<10000002;i++){
        int tmp = i;
        int flag = 1;
        // 채널 0 가능한지 check
        if(tmp==0 && err_button[0]) flag = 0;
        else{
            while(tmp>0){
                if(err_button[tmp%10]){
                    flag = 0;
                    break;
                }
                tmp /= 10;
            }
        }
        if(flag) channel[i] = 1;
    }

    //가장 가까운 채널 번호 탐색
    int ch=100;
    for(int i=0;i<10000002; i++){
        if(channel[i]){
            if(abs(n-ch) > abs(n-i)) ch = i;
        }
    }

    int digit = 0;
    int ch_tmp = ch;
    
    // 채널가기 위해 누르는 버튼 횟수 계산
    while(ch_tmp){
        digit++;
        ch_tmp /= 10;
    }
    if(ch == 0) digit = 1;
    // 100에서 이동과 channel 누르고 이동을 비교 후 출력
    cout << min(abs(n-100),  abs(n-ch)+digit);
}