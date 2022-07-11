#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> DQ;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string move;
        cin >> move;

        if(move == "push_front"){
            int num;
            cin >> num;
            DQ.push_front(num);
        } else if(move == "push_back"){
            int num;
            cin >> num;
            DQ.push_back(num);
        } else if(move == "pop_front"){
            if(DQ.empty()) cout << "-1\n";
            else{
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        } else if(move == "pop_back"){
            if(DQ.empty()) cout << "-1\n";
            else{
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        } else if(move == "size"){
            cout << DQ.size() << '\n';
        } else if(move == "empty"){
            if(DQ.empty()) cout << "1\n";
            else cout << "0\n";
        } else if(move == "front"){
            if(DQ.empty()) cout << "-1\n";
            else{
                cout << DQ.front() << '\n';
            }
        } else if(move == "back"){
            if(DQ.empty()) cout << "-1\n";
            else{
                cout << DQ.back() << '\n';
            }
        }
    }
}