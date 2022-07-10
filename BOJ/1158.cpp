#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<int> L;

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) L.push_back(i);

    auto pointer = L.begin();
    cout << '<';
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < k-1; j++){
            if(pointer == L.end()) pointer++;
            pointer++;
            if(pointer == L.end()) pointer++;
        }
        cout << *pointer << ", ";
        pointer = L.erase(pointer);
//        for(auto a : L) cout << a;
//        cout << '\n';
    }
    pointer = L.begin();
    cout << *pointer;
    cout << '>';

}