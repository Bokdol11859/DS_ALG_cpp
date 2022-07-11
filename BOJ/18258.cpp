#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    queue<int> Q;

    for(int i = 0; i < n; i++){
        string move;
        cin >> move;
        if(move == "push"){
            int num;
            cin >> num;
            Q.push(num);
        } else if(move == "pop"){
            if(Q.empty()){
                cout << "-1\n";
            } else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if(move == "size"){
            cout << Q.size() << '\n';

        } else if(move == "empty"){
            if(Q.empty()) cout << "1\n";
            else cout << "0\n";
        } else if(move == "front"){
            if(Q.empty()) cout << "-1\n";
            else cout << Q.front() << "\n";
        } else if(move == "back"){
            if(Q.empty()) cout << "-1\n";
            else cout << Q.back() << "\n";
        }
    }
}