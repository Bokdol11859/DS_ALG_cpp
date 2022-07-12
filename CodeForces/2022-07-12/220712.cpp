#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

// Q1 //////////////////////////////////////////////
// import sys
//
// n = int(sys.stdin.readline().rstrip())
//
// for i in range(n):
//     temp = sys.stdin.readline().rstrip()
//     if temp.upper() == "YES":
//         print("YES")
//     else:
//         print('NO')

// Q2  //////////////////////////////////////////////
//    int n;
//    cin >> n;
//
//    for(int i = 0; i < n; i++){
//        bool bals[26] = {false};
//
//        int strlen;
//        cin >> strlen;
//
//        string str;
//        cin >> str;
//
//        int count = 0;
//
//        for(char a : str){
//            if(!bals[int(a)-65]){
//                count+=2;
//                bals[int(a)-65] = true;
//            } else {
//                count++;
//            }
//        }
//        cout << count << '\n';
//    }

// Q3 /////////////////////////////////////

//    int n;
//    cin >> n;
//    for(int j = 0; j < n; j++){
//
//        int num_wheel;
//        cin >> num_wheel;
//
//        int wheels[num_wheel];
//        for(int i = 0; i < num_wheel; i++){
//            cin >> wheels[i];
//        }
//
//        for(int i = 0; i < num_wheel; i++){
//            int move;
//            cin >> move;
//
//            string moves;
//            cin >> moves;
//            for(char a : moves){
//                int cur = wheels[i];
//                if(a == 'D'){
//                    cur++;
//                    cur %= 10;
//                } else {
//                    cur--;
//                    if(cur < 0) cur = 10 + cur;
//                }
//                wheels[i] = cur;
//            }
//        }
//        for(int a : wheels){
//            cout << a << " ";
//        }
//        cout << '\n';
//    }
}