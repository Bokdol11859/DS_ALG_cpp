#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int board[501][501];
bool vis[501][501];

int bfs(int x, int y, int n, int m){
    int count = 0;
    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y] = 1;
    count++;
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= n  || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] == 1 || board[nx][ny] == 0) continue;
            Q.push({nx, ny});
            vis[nx][ny] = 1;
            count++;
        }
    }
    return count;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    int max_num = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] != 0 || board[i][j] == 0) continue;
            int temp = bfs(i, j, n, m);
            count++;
            max_num = max(temp, max_num);
        }
    }
    cout << count << '\n' << max_num;
}

