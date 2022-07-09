#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List Implementation from Scratch /////
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num){
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != 1) pre[nxt[unused]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse(){
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test(){
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test(){
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}
////////////////////////////////////////////////////////////

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Doubly Linked List Implementation Test ////////////
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);

    insert_test();
    erase_test();
    //////////////////////////////////////////////////////
    //STL List
    list<int> L = {1, 2}; // 1 2
    auto t = L.begin(); // t points to 1, the address of the beginning value of the linked list
    L.push_front(10); // 10 1 2
    cout << *t << '\n'; // Prints the value t is pointing at, which is 1 in this case.
    L.push_back(5); // 10 1 2 5
    L.insert(t, 6); // 10 6 1 2 5. Inserts 6 into the position where t is pointing at.
    t++; // Increment t by 1.
    t = L.erase(t); // Removes the value which t is pointing at and returns the address of the next value
                    // 10 6 1 5, t points to 5
    cout << *t << '\n'; // 5
    for(auto i : L) cout << i << ' '; // Traverses the whole list and outputs all values in it
}