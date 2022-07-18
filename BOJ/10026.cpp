#include <bits/stdc++.h>
using namespace std;

char board[102][102];
bool vis[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int n, int x, int y){
    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y] = true;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(board[nx][ny] != board[cur.first][cur.second] || vis[nx][ny] != false) continue;
            vis[nx][ny] = true;
            Q.push({nx, ny});
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int j = 0;
        for(auto a : s){
            board[i][j] = a;
            j++;
        }
    }

    int r = 0;
    int g = 0;
    int b = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'R' && !vis[i][j]){
                bfs(n, i, j);
                r++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'G' && !vis[i][j]){
                bfs(n, i, j);
                g++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'B' && !vis[i][j]){
                bfs(n, i, j);
                b++;
            }
        }
    }
    cout << r+g+b << " ";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'R') board[i][j] = 'G';
        }
    }

    for(int i = 0; i < n; i++){
        fill(vis[i], vis[i]+102, false);
    }

    b = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'B' && !vis[i][j]){
                bfs(n, i, j);
                b++;
            }
        }
    }
    g = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'G' && !vis[i][j]){
                bfs(n, i, j);
                g++;
            }
        }
    }
    cout << b+g;
}