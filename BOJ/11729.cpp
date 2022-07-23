#include <bits/stdc++.h>
using namespace std;

void hanoi(int start, int end, int num){

    if(num == 1){
        cout << start << ' ' << end << '\n';
        return;
    }

    hanoi(start, 6 - start - end, num-1);
    cout << start << ' ' << end << '\n';
    hanoi(6 - start - end, end, num-1);


}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    cout << (1 << n) - 1 << '\n';

    hanoi(1, 3, n);

}