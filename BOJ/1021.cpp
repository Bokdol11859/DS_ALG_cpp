#include <bits/stdc++.h>
using namespace std;

int find(deque<int> dq, int num){
    auto itr = find(dq.begin(), dq.end(), num);
    if(itr != dq.end()){
        return itr - dq.begin();
    } else {
        return -1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> DQ;

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        DQ.push_back(i);
    }

    int nums[m];
    for(int i = 0; i < m; i++){
        cin >> nums[i];
    }

    int mid = n / 2;

    int count = 0;

    for(int i = 0; i < m; i++){
        int idx = find(DQ, nums[i]);
        int right = DQ.size() - idx;
        int left = idx;
        if(right < left){
            for(int j = 0; j < right; j++){
                DQ.push_front(DQ.back());
                DQ.pop_back();
                count++;
            }
            DQ.pop_front();
        } else if(left < right){
            for(int j = 0; j < left; j++){
                DQ.push_back(DQ.front());
                DQ.pop_front();
                count++;
            }
            DQ.pop_front();
        } else {
            for(int j = 0; j < left; j++){
                DQ.push_back(DQ.front());
                DQ.pop_front();
                count++;
            }
            DQ.pop_front();
        }
    }
    cout << count;
}
