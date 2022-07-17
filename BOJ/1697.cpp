#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    if(n == k){
        cout << 0;
        return 0;
    }
    queue<int> Q;
    int vis[100100];
    fill(vis, vis+100100, -1);
    vis[n] = 0;
    Q.push(n);
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        int nx;
        nx = cur + 1;
        if(nx >= 0 && nx <= 100000 && vis[nx] == -1){
            vis[nx] = vis[cur] + 1;
            if(nx == k) {
                cout << vis[nx];
                return 0;
            }
            Q.push(nx);
        }

        nx = cur - 1;
        if(nx >= 0 && nx <= 100000 && vis[nx] == -1){
            vis[nx] = vis[cur] + 1;
            if(nx == k) {
                cout << vis[nx];
                return 0;
            }
            Q.push(nx);
        }


        nx = cur * 2;
        if(nx >= 0 && nx <= 100000 && vis[nx] == -1){
            vis[nx] = vis[cur] + 1;
            if(nx == k) {
                cout << vis[nx];
                return 0;
            }
            Q.push(nx);
        }

    }
}