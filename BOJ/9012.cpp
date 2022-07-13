#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        stack<char> S;
        bool check = true;
        for(char a : s){
            if(a == '('){
                S.push('(');
            } else {
                if(S.empty()){
                    cout << "NO\n";
                    check = false;
                    break;
                } else if(S.top() != '('){
                    cout << "NO\n";
                    check = false;
                    break;
                } else {
                    S.pop();
                }
            }
        }
        if(!check) continue;
        if(!S.empty()){
            cout << "NO\n";
            continue;
        } else {
            cout << "YES\n";
        }
    }
}