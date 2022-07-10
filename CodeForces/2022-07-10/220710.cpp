#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


//    Q1    //////////////////////////////////////////////////////////
//    int n;
//    cin >> n;
//
//    long long int pows[10];
//
//    for(int i = 0; i < 10; i++){
//        pows[i] = pow(10, i);
//    }
//
//    for(int i = 0; i < n; i++){
//        int number;
//        cin >> number;
//        long long int temp[10];
//        for(int j = 0; j < 10; j++){
//            temp[j] = number - pows[j];
//        }
//        long long int check = 999999999;
//        for(auto a : temp){
//            if(a >= 0 &&a <= check){
//                check = a;
//            }
//        }
//        cout << check << '\n';
//
//    }

//    Q2    //////////////////////////////////////////////////////////

//    int n;
//    cin >> n;
//
//    for(int i = 0; i < n; i++){
//        string word;
//        cin >> word;
//
//        bool alp[26];
//        fill(alp, alp+26, false);
//
//        int count = 0;
//        int days = 1;
//
//        for(char a : word){
//            int temp = int(a)-97;
//            if(!alp[temp]){
//                alp[temp] = true;
//                count++;
//            }
//            if(count == 4){
//                count = 1;
//                days++;
//                fill(alp, alp+26, false);
//                alp[temp] = true;
//            }
//
//        }
//        cout << days << '\n';
//    }

//    Q3  TLE  //////////////////////////////////////////////////////////

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        int node, tries;
        cin >> node >> tries;

        int nodes[node];
        for(int j = 0; j < node; j++){
            int temp;
            cin >> temp;
            nodes[j] = temp;
        }
        for(int j = 0; j < tries; j++){
            int start, end;
            cin >> start >> end;

            bool started = false;
            bool finished = false;
            for(int k = 0; k < node; k++){
                if(nodes[k] == start) started = true;
                if(started && nodes[k] == end) finished = true;
            }
            if(started && finished) cout << "YES\n";
            else cout << "NO\n";
        }

    }
}