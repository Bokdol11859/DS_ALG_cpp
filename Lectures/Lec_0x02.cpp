#include <bits/stdc++.h>
using namespace std;

bool cmp2(vector<int>& v1, vector<int>& v2, int idx){
    return v1[idx] > v2[idx];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

//    vector<int> v1(100);
//    vector<int> v2(100);
//
//    string s;
//    getline(cin, s);
//
//    cout << s;
//
//    v1[4] = 5;
//    v2[4] = 3;
//
//    cout << cmp2(v1, v2, 4);

    int x, y;
    cin >> x >> y;
    for(int i = 0; i < x; i++){
        int temp;
        cin >> temp;
        if(temp < y) cout << temp << ' ';
    }
}
