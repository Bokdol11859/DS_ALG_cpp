#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void recursion(int k){
    if(m == k){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!isused[i-1]){
            arr[k] = i;
            isused[i-1] = true;
            recursion(k+1);
            isused[i-1] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    recursion(0);

}