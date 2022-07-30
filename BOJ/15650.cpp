#include <bits/stdc++.h>
using namespace std;

int n, m;

int a[9];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = m; i < n; i++){
        a[i] = 1;
    }
    do{
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                cout << i+1 << " ";
            }
        }
        cout << '\n';
    } while (next_permutation(a, a+n));
}