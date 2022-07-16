#include <bits/stdc++.h>
using namespace std;

char board[102][102];
int vis[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(auto & vi : vis){
        fill(vi, vi+102, -1);
    }

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int j = 0;
        for(char a : s){
            board[i][j] = a;
            j++;
        }
    }

    queue<tuple<int, int, int>> Q;
    Q.push({0, 0, 0}); //x, y, count
    vis[0][0] = 1;
    while(!Q.empty()){
        tuple<int, int, int> cur = Q.front(); Q.pop();
        if(get<0>(cur) == n-1 && get<1>(cur) == m-1) {
            cout << get<2>(cur)+1;
            return 0;
        }
        for(int i = 0; i < 4; i++){
            int nx = get<0>(cur) + dx[i];
            int ny = get<1>(cur) + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] != -1 || board[nx][ny] != '1') continue;
            Q.push({nx, ny, get<2>(cur)+1});
            vis[nx][ny] = get<2>(cur)+1;
        }
    }



}