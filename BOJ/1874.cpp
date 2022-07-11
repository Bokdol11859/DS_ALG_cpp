#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    stack<int> S;

    vector<char> ans;

    int i = 1;
    while(true){
        int cur;
        cin >> cur;
        if(cur >= i){
            while(cur >= i){
                S.push(i);
                i++;
                ans.push_back('+');
            }
            ans.push_back('-');
            S.pop();
            if(S.empty() && i > n) break;
        } else {
            int top = S.top();
            if(top != cur){
                cout << "NO";
                return 0;
            } else {
                ans.push_back('-');
                S.pop();
                if(S.empty() && i > n) break;
            }
        }
    }
    for(char a : ans){
        cout << a << '\n';
    }
}