#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
int board[1002][1002];
int vis[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> m >> n;

    for(auto & vi : vis){
        fill(vi, vi+1002, -1);
    }

    pair<int, int> start;
    queue<pair<int, int>> Q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                start = {i, j};
                Q.push(start);
                vis[start.X][start.Y] = 0;
            }
        }
    }

    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] == -1 || vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    int max_num = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == -1 && board[i][j] == 0){
                cout << -1;
                return 0;
            }
            max_num = max(max_num, vis[i][j]);
        }
    }
    cout << max_num;
}