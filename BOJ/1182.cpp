#include <bits/stdc++.h>
using namespace std;

int n, s, cnt;
int nums[1000001];

void recursion(int sum, int cur){
    if(cur == n){
        if(sum == s){
            cnt++;
        }
        return;
    }
    recursion(sum, cur+1);
    recursion(sum+nums[cur], cur+1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    recursion(0, 0);
    if(s == 0){
        cout << cnt-1;
    } else {
        cout << cnt;
    }

}