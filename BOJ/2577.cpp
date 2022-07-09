#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    long long int ans;
    string ans_str;
    ans = a * b * c;
    ans_str = to_string(ans);

    vector<int> nums(10);

    for(auto a : ans_str){
        nums[int(a)-48]++;
    }
    for(auto a : nums){
        cout << a << '\n';
    }
}