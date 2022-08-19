#include<bits/stdc++.h>

using namespace std;
deque<int> dq;
static map<string, int> m;
void init(){
    m.insert({"push_front", 1});
    m.insert({"push_back", 2});
    m.insert({"pop_front", 3});
    m.insert({"pop_back", 4});
    m.insert({"size", 5});
    m.insert({"empty", 6});
    m.insert({"front", 7});
    m.insert({"back", 8});
}
int main(){
    init();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    while(N--){
        string command;
        int val;
        
        cin >> command;
        // cout << m[command] << "\n";
        // cout << "\n" << command_type << "\n\n That's it!\n\n" << val << "dd\n\n";
        switch (m[command])
        {
            case 1:
                cin >> val;
                dq.push_front(val);
                break;
            case 2:
                cin >> val;
                dq.push_back(val);
                break;
            case 3:
                if(dq.empty()) cout << "-1\n";
                else {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                break;
            case 4:
                if(dq.empty()) cout << "-1\n";
                else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                break;
            case 5:
                cout << dq.size() << "\n";
                break;
            case 6:
                cout << dq.empty() << "\n";
                break;
            case 7:
                if(dq.empty()) cout << "-1\n";
                else {
                    cout << dq.front() << "\n";
                }
                break;
            case 8:
                if(dq.empty()) cout << "-1\n";
                else {
                    cout << dq.back() << "\n";
                }
                break;
            default:
                break;
        }
        
        cin.ignore(100, '\n');
    }
}