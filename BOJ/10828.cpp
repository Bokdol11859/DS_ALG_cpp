#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int moves;
    cin >> moves;
    stack<int> S;

    for(int i = 0; i < moves; i++){
        string move;
        cin >> move;

        if(move == "push"){
            int temp;
            cin >> temp;
            S.push(temp);
        } else if(move == "pop"){
            if(!S.empty()){
                cout << S.top() << "\n";
                S.pop();
            } else {
                cout << "-1\n";
            }

        } else if(move == "size"){
            cout << S.size() << "\n";
        } else if(move == "empty"){
            if(S.empty()){
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            if(!S.empty()){
                cout << S.top() << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
}