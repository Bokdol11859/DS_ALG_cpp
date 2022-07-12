#include <iostream>
#include <deque>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string moves;
        cin >> moves;
        int dir = 1;
        deque<int> DQ;
        int elements;
        cin >> elements;
        string L;
        cin >> L;
        string ans = "";
        int x = L.size();
        for(int j = 0; j < x; j++){
            if(L[j] == '[') continue;
            if(L[j] == ',' or L[j] == ']'){
                if(ans != "") {
                    DQ.push_back(stoi(ans));
                    ans = "";
                }
            }
            else{
                ans += L[j];
            }
        }
        bool check_error = false;
        for(auto a : moves){
            if(a == 'R') dir = -dir;
            else{
                if(DQ.size()>0) {
                    if (dir < 0) DQ.pop_back();
                    else DQ.pop_front();
                } else {
                    cout << "error\n";
                    check_error = true;
                    break;
                }
            }
        }
        if(check_error){
            continue;
        }
        if(DQ.empty()) cout << "[]\n";
        else{
            if(dir>0){
                cout << "[";
                cout << DQ.front();
                DQ.pop_front();
                for(auto a : DQ){
                    cout << "," << a;
                }
                cout << "]\n";
            } else {
                cout << "[";
                cout << DQ.back();
                DQ.pop_back();
                for(int j = 0; j < DQ.size(); j++){
                    cout << "," << DQ.back();
                    DQ.push_front(DQ.back());
                    DQ.pop_back();
                }
                cout << "]\n";
            }
        }

    }
}