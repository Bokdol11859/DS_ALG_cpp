#include <bits/stdc++.h>
using namespace std;

int m, n;

deque<int> dq;

void recursion(deque<int> dq){
    if(dq.size() == m){
        for(int i : dq){
            cout << i << ' ';
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i < n+1; i++){
        dq.push_back(i);
        recursion(dq);
        dq.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;

    recursion(dq);

}