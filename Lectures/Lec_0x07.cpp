#include <bits/stdc++.h>
using namespace std;


// Deque implementation from scratch //////////////////////////////////

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}

void test(){
    push_back(30); // 30
    cout << front() << '\n'; // 30
    cout << back() << '\n'; // 30
    push_front(25); // 25 30
    push_back(12); // 25 30 12
    cout << back() << '\n'; // 12
    push_back(62); // 25 30 12 62
    pop_front(); // 30 12 62
    cout << front() << '\n'; // 30
    pop_front(); // 12 62
    cout << back() << '\n'; // 62
}

int main(void){

    // Deque implementation from scratch
    test();

    // STL Deque
    deque<int> DQ;
    DQ.push_front(10); // 10
    DQ.push_back(50); // 10 50
    DQ.push_front(24); // 24 10 50
    for(auto x : DQ) cout << x; // 24 10 50
    cout << DQ.size() << '\n'; // 3
    if(DQ.empty()) cout << "DQ is empty\n";
    else cout << "DQ is not empty\n";
    DQ.pop_front(); // 10 50
    DQ.pop_back(); // 10
    cout << DQ.back() << '\n'; // 10
    DQ.push_back(72); // 10 72
    cout << DQ.front() << '\n'; // 10
    DQ.push_back(12); // 10 72 12
    DQ[2] = 17; // 10 72 17
    DQ.insert(DQ.begin()+1, 33); // 10 33 72 17
    DQ.insert(DQ.end(), 60); // 10 33 72 17 60
    for(auto x : DQ) cout << x << ' ';
    cout << '\n';
    DQ.erase(DQ.begin()+3); // 10 33 72 60
    cout << DQ[3] << '\n'; // 60
    DQ.clear(); //Clear all elements in DQ
}