#include <bits/stdc++.h>
using namespace std;

int vis[301][301];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int a;
    cin >> a;

    for(int i = 0; i < a; i++){
        int n;
        cin >> n;

        int ax, ay;
        cin >> ax >> ay;
        int bx, by;
        cin >> bx >> by;

        queue<pair<int, int>> Q;
        Q.push({ax, ay});
        bool found = false;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            if(cur.first == bx && cur.second == by){
                cout << vis[cur.first][cur.second] << '\n';
                found = true;
            }
            for(int j = 0; j < 8; j++){
                int nx = cur.first + dx[j];
                int ny = cur.second + dy[j];

                if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if(vis[nx][ny] != 0) continue;
                Q.push({nx, ny});
                vis[nx][ny] = vis[cur.first][cur.second] + 1;

            }
            if(found) break;

        }
        for(int j = 0; j < n; j++){
            fill(vis[j], vis[j]+301, 0);
        }
    }
}