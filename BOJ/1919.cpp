#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a;
    cin >> b;

    vector<int> a_alp(26);
    vector<int> b_alp(26);

    for(auto i : a){
        a_alp[int(i)-97]++;
    }
    for(auto i : b){
        b_alp[int(i)-97]++;
    }
    int ans = 0;
    for(int i = 0; i < a_alp.size(); i++){
        ans += abs(a_alp[i] - b_alp[i]);
    }
    cout << ans;
}