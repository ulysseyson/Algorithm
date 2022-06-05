#include <bits/stdc++.h>
#pragma warning(disable : 4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
typedef long long LL;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<pair<ll, ll>> s;


    ll n;
    cin >> n;
    ll result = 0;
    for(int i = 0; i< n; i++){
        int key;
        cin >> key;

        while(!s.empty() && s.top().first < key){
            result += s.top().second;
            s.pop();
        }

        if(s.empty()){
        // cout << "½ºÅÃ ºö!" << key << "\n";
            s.push({key, 1});
        }

        else{
            if (s.top().first > key){
                result++;
                s.push({key, 1});
            }
            else{
                pair<int, int> tmp = s.top();
                result += tmp.second;
                s.pop();
                if(!s.empty()){
                    result ++;
                }

                tmp.second++;
                s.push(tmp);
            }




        }

    }
    cout <<result <<"\n";
    return 0;
}
