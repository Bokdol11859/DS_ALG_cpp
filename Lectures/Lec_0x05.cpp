#include <bits/stdc++.h>
using namespace std;


// Stack Implemented from Scratch//////////////////////////////
const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}

void pop(){
    pos--;
}

int top(){
    return dat[pos-1];
}

void test(){
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Stack Implemented from Scratch
    //test();

    // STL Stack
    stack<int> S;
    S.push(10);
    S.push(20);
    S.push(30);
    cout << S.size() << '\n';
    if(S.empty()) cout << "S is empty\n";
    else cout << "S is not empty\n";
    S.pop();
    cout << S.top() << '\n';
    S.pop();
    cout << S.top() << '\n';
    S.pop();
    if(S.empty()) cout << "S is empty\n";
}
