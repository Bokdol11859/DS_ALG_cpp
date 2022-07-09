#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums(10);

    string number;
    cin >> number;

    for(auto a : number){
        if(int(a)-48 == 9 || int(a)-48 == 6){
            if(nums[6] > nums[9]) nums[9]++;
            else if (nums[6] < nums[9]) nums[6]++;
            else nums[int(a)-48]++;
        } else {
            nums[int(a)-48]++;
        }
    }

    int ans;
    ans = *max_element(nums.begin(), nums.end());
    cout << ans;
}