#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> DQ;

    int n, m;
    cin >> n >> m;

    int nums[m];
    for(int i = 0; i < m; i++){
        cin >> nums[i];
    }
    int lefts[m];
    int rights[m];
    int count = 0;
    for(int a : nums){
        lefts[count] = a - 1;
        rights[count] = n - a;
    }

    for(int i = 0; i < n; i++){

    }


}