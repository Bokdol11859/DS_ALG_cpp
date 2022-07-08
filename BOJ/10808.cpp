#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> alphas(26);
    string input;
    getline(cin, input);

    for(char i : input){
        alphas[int(i)-97]++;
    }

    for(int alpha : alphas){
        cout << alpha << ' ';
    }

}