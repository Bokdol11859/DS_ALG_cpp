#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int x;
    cin >> x;

    vector<int> dp(2000001);
    int ans = 0;

    for(auto a : nums){
        int temp = x - a;
        if(temp > 0){
            if(dp[temp] == 1){
                ans++;
            }
            dp[a]++;
        }
    }

    cout << ans;
}