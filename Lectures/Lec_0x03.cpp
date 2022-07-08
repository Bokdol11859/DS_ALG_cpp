#include <bits/stdc++.h>
using namespace std;


// Array implementation ////////////////////////////////////////////////

// Code I wrote
//void insert(int idx, int num, int arr[], int& len){
//    len++;
//    int temp[len];
//    for(int i = 0; i < idx; i++){
//        temp[i] = arr[i];
//    }
//    temp[idx] = num;
//    for(int i = idx+1; i < len; i++){
//        temp[i] = arr[i-1];
//    }
//    for(int i = 0; i < len; i++){
//        arr[i] = temp[i];
//    }
//}

// Code provided
//void insert(int idx, int num, int arr[], int& len){
//    for(int i = len; i > idx; i--){
//        arr[i] = arr[i-1];
//    }
//    arr[idx] = num;
//    len++;
//}

// Code I wrote
//void erase(int idx, int arr[], int& len){
//    len--;
//    int temp[len];
//    for(int i = 0; i < idx; i++){
//        temp[i] = arr[i];
//    }
//    for(int i = idx; i < len; i++){
//        temp[i] = arr[i+1];
//    }
//    for(int i = 0; i < len; i++){
//        arr[i] = temp[i];
//    }
//}

// Code provided
//void erase(int idx, int arr[], int& len){
//    len--;
//    for(int i = idx; i < len; i++){
//        arr[i] = arr[i+1];
//    }
//
//}

//void printArr(int arr[], int& len){
//    for(int i = 0; i < len; i++) cout << arr[i] << ' ';
//    cout << "\n\n";
//}
//
//void insert_test(){
//    cout << "***** insert_test *****\n";
//    int arr[10] = {10, 20, 30};
//    int len = 3;
//    insert(3, 40, arr, len); // 10 20 30 40
//    printArr(arr, len);
//    insert(1, 50, arr, len); // 10 50 20 30 40
//    printArr(arr, len);
//    insert(0, 15, arr, len); // 15 10 50 20 30 40
//    printArr(arr, len);
//}
//
//void erase_test(){
//    cout << "***** erase_test *****\n";
//    int arr[10] = {10, 50, 40, 30, 70, 20};
//    int len = 6;
//    erase(4, arr, len); // 10 50 40 30 20
//    printArr(arr, len);
//    erase(1, arr, len); // 10 40 30 20
//    printArr(arr, len);
//    erase(3, arr, len); // 10 40 30
//    printArr(arr, len);
//}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

//    insert_test();
//    erase_test();

    //Creating an array full of a number
    int a[21]; //1d array
    fill(a, a+21, 0);

    int b[21][21]; //2d array
    for(int i = 0; i < 21; i++){
        fill(b[i], b[i]+21, 0);
    }

    // STL Vector
    vector<int> v1(3, 5); // {5, 5, 5}
    v1.size(); // 3, Time Complexity: O(1)
    v1.push_back(7); // {5, 5, 5, 7}, Time Complexity: O(1)

    vector<int> v2(2); // {0, 0}
    v2.insert(v2.begin()+1, 3); // {0, 3, 0}, Time Complexity: O(N)

    vector<int> v3 = {1, 2, 3, 4}; // {1, 2, 3, 4}
    v3.erase(v3.begin()+2); // {1, 2, 4}, Time Complexity: O(N)

    vector<int> v4; // {}
    v4 = v3; // {1, 2, 4} Deep Copy
    v4.pop_back(); //{1, 2}, Time Complexity: O(1)
    v4.clear(); // {}, Time Complexity: O(1)

    // Vector For loops
    // For Each Loop
    for(int e : v1){} // Call By Value
    for(int &e : v1){} // Call By Reference

    // For Loop
    for(int i = 0; i < v1.size(); i++){
        v1[i];
    }
}