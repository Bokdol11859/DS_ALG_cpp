#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[51][51];
bool vis[51][51];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int m, int n, int x, int y){
    queue<pair<int, int>> Q;

    Q.push({x, y});
    vis[x][y] = true;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] != 1 || vis[nx][ny]) continue;
            vis[nx][ny] = true;
            Q.push({nx, ny});
        }
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int m, n, k;
        cin >> m >> n >> k;

        for(int j = 0; j < n; j++){
            fill(vis[j], vis[j]+51, false);
        }
        for(int j = 0; j < n; j++){
            fill(board[j], board[j]+51, 0);
        }

        for(int j = 0; j < k; j++){
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int ans = 0;
        for(int j = 0; j < n; j++){
            for(int c = 0; c < m; c++){
                if(board[j][c] == 1 && vis[j][c] == 0){
                    bfs(m, n, j, c);
                    ans++;
                }
            }
        }
        cout << ans << '\n';


    }
}