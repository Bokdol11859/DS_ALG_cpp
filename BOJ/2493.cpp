#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    stack<int> S;
    stack<int> height;

    int towers[n];

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        towers[i] = temp;
    }

    int a = 0;
    int cur = 0;
    while(a < n){
        if(S.empty()){
            S.push(towers[a]);
            cout << 0 << ' ';
            a++;
            height.push(a);
        } else {
            int top = S.top();
            if(top < towers[a]){
                S.pop();
                height.pop();
            } else {
                cout << height.top() << " ";
                S.push(towers[a]);
                height.push(a+1);
                a++;
            }
        }
    }
}