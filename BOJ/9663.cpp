#include <bits/stdc++.h>
using namespace std;

int n, cnt;

bool is_used_col[225];
bool is_used_ltor[225];
bool is_used_rtol[225];

void recursion(int cur){
    if(n == cur){
        cnt++;
        return;
    }
    for(int i = 0; i < n; i++){
        if(is_used_col[i] || is_used_ltor[cur+i] || is_used_rtol[cur-i+(n-1)]){
            continue;
        }
        is_used_col[i] = true;
        is_used_ltor[cur+i] = true;
        is_used_rtol[cur-i+(n-1)] = true;
        recursion(cur+1);
        is_used_col[i] = false;
        is_used_ltor[cur+i] = false;
        is_used_rtol[cur-i+(n-1)] = false;
    }

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    cnt = 0;
    recursion(0);
    cout << cnt;

}