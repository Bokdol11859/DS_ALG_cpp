#include <iostream>
using namespace std;

int func1(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0) count += i;
    }

    return count;
}

int func2(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == 100) {
                return 1;
            }
        }
    }
    return 0;
}

#include <cmath>

int func3(int n){
    for(int i = 0; i < n; i++){
        if(i * i == n) return 1;
    }
    return 0;
}

int func4(int n){
    for(int i = 0; i < n; i++){
        if(pow(2, i) > n) return pow(2, i-1);
    }
    return 0;
}

int main() {
//    cout << func1(27639);
//    int list[4] = {4, 13, 63, 87};
//    cout << func2(list, 4);
//    cout << func3(756580036);
    cout << func4(1024);
}