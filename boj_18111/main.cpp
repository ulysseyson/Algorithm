#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int ground[501][501];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, b;
    cin >> n >> m >> b;
    // 땅 정보 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> ground[i][j];
        }
    }

    // max height search
    int max=0;
    int min=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max < ground[i][j]) max = ground[i][j];
            if(min > ground[i][j]) min = ground[i][j];
        }
    }

    // inv 값 변경해가면서 최대 높이 브루트포스
    int needed_block=0;

    while(true){
        // 현재 높이로 할때 인벤에 들어오는 블럭 개수
        ll tmp_inv = b;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ground[i][j] > max) {
                    tmp_inv += (ground[i][j] - max);
                }
            }
        }
        // 현재 높이로 채울 때 필요한 블럭 개수
        needed_block=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ground[i][j] < max) {
                    needed_block += max-ground[i][j];
                }
            }
        }
        if(needed_block <= tmp_inv){
            break;
        }
        else max--;
    }
    ll min_work_time = 256 * 250000;
    int height;
    for(int h=max; h>=min; h--){
        int work_time = 0;
        // h 까지 인벤에 있는 블럭으로 쌓는데 걸리는 시간
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                work_time += (ground[i][j] > h) ? 0 : h - ground[i][j];
            }
        }
        // h 이상의 블럭을 깍아내는데 걸리는 시간
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                work_time += (ground[i][j] > h) ? (ground[i][j] - h)*2 : 0;
            }
        }
        if(work_time < min_work_time) {
            min_work_time = work_time;
            height = h;
        }
    }
    cout<< min_work_time << " " << height;
    
}