#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> count(200);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        count[temp+100]++;
    }

    int v;
    cin >> v;

    cout << count[v+100];
}
