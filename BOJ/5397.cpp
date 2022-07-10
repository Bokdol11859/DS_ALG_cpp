#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string ps;
        cin >> ps;

        list<char> L;
        auto pointer = L.end();
        for(auto a : ps){
            if(a == '<'){
                if(pointer != L.begin()) pointer--;
            } else if (a == '>'){
                if(pointer != L.end()) pointer++;
            } else if (a == '-'){
                if(pointer != L.begin()){
                    pointer--;
                    pointer = L.erase(pointer);
                }
            } else {
                L.insert(pointer, a);
            }
        }

        for(auto a : L){
            cout << a;
        }
        cout << '\n';
    }

}
