#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // STL pair
    pair<int, int> t1 = make_pair(10, 13); // {10, 13}
    pair<int, int> t2 = {4, 6}; // {4, 6}
    cout << t2.first << ' ' << t2.second << '\n'; // 4 6
    if(t2 < t1) cout << "t2 < t1"; // t2 < t1


    // BFS Algorithm
    queue<pair<int, int>> Q;
    vis[0][0] = 1;
    Q.push({0, 0});
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        cout << "(" << cur.X << ", " << cur.Y << ") -> ";
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }

}