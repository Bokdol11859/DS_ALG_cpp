#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string line;
        cin >> line;

        stack<char> S;
        bool check = true;
        for(char a : line){
            if(a == 'A'){
                if(!S.empty() && S.top() == 'A'){
                    S.pop();
                } else {
                    S.push('A');
                }
            } else {
                if(!S.empty() && S.top() == 'B'){
                    S.pop();
                } else {
                    S.push('B');
                }
            }
        }
        if(S.empty()){
            ans++;
        }
    }
    cout << ans;
}