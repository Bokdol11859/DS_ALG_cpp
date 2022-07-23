#include <bits/stdc++.h>
using namespace std;

void recursion1(int n){
    if(n < 1) return;
    cout << n << '\n';
    recursion1(n-1);
}

int recursion2(int n){
    if(n == 0) return 0;
    return n + recursion2(n-1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    recursion1(10);
    cout << recursion2(10);
}