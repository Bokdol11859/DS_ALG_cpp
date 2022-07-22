#include <bits/stdc++.h>
using namespace std;

int board[101][101][101];
int vis[101][101][101];

int dx[6] = {1, 0, 0, -1, 0, 0};
int dy[6] = {0, 1, 0, 0, -1, 0};
int dz[6] = {0, 0, 1, 0, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, n, h;
    cin >> m >> n >> h;
    queue<tuple<int, int, int>> Q;

    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            fill(vis[i][j], vis[i][j]+101, -1);
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                int temp;
                cin >> temp;
                if(temp == 1){
                    vis[i][j][k] = 0;
                    Q.push({i, j, k});
                } else if(temp == -1){
                    vis[i][j][k] = -99999;
                }

                board[i][j][k] = temp;
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int i = 0; i < 6; i++){
            int nx = get<2>(cur) + dx[i];
            int ny = get<1>(cur) + dy[i];
            int nz = get<0>(cur) + dz[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h) continue;
            if(vis[nz][ny][nx] != -1 || board[nz][ny][nx] == -1) continue;
            vis[nz][ny][nx] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({nz, ny, nx});
        }
    }


    int max_num = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(vis[i][j][k] == -1){
                    cout << -1;
                    return 0;
                }
                max_num = max(max_num, vis[i][j][k]);
            }
        }
    }
    cout << max_num;





}