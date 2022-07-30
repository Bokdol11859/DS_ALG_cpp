#include <bits/stdc++.h>
using namespace std;

int n, m;
deque<int> dq;

void recursion(deque<int> dq, int num){
    if(dq.size() == m){
        for(int i : dq){
            cout << i << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = num; i <= n; i++){
        dq.push_back(i);
        recursion(dq, i);
        dq.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    recursion(dq, 1);

}