#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<char> L;

    string temp;
    getline(cin, temp);

    for(auto a : temp){
        L.push_back(a);
    }
    auto cursor = L.end();

    int moves;
    cin >> moves;

    for(int i = 0; i < moves; i++){
        string move;
        cin >> move;
        if(move == "P"){
            char word;
            cin >> word;
            L.insert(cursor, word);
        } else if (move == "L") {
            if (cursor != L.begin()) cursor--;
        } else if (move == "D") {
            if (cursor != L.end()) cursor++;
        } else if (move == "B") {
            if(cursor != L.begin()){
                cursor--;
                cursor = L.erase(cursor);
            }
        }

    }

    for(auto a : L){
        cout << a;
    }

}