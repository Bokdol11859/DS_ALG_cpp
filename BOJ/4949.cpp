#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string s;
    getline(cin, s);
    do{

        stack<char> Stack;
        for(char a : s){
            if(a == '('){
                Stack.push('(');
            } else if(a == ')'){
                if(Stack.empty()){
                    cout << "no\n";
                    break;
                }
                char temp;
                temp = Stack.top();
                Stack.pop();
                if(temp != '('){
                    cout << "no\n";
                    break;
                }
            } else if(a == '['){
                Stack.push('[');
            } else if(a == ']'){
                if(Stack.empty()){
                    cout << "no\n";
                    break;
                }
                char temp;
                temp = Stack.top();
                Stack.pop();
                if(temp != '['){
                    cout << "no\n";
                    break;
                }
            } else if(a == '.'){
                if(!Stack.empty()){
                    cout << "no\n";
                    break;
                } else {
                    cout << "yes\n";
                }
            }
        }
        getline(cin, s);
    } while (s != ".");
}