#include <bits/stdc++.h>
using namespace std;

char board[1010][1010];
int p_vis[1010][1010];
int f_vis[1010][1010];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(auto & vi : f_vis){
        fill(vi, vi+1010, 9999);
    }

    queue<pair<int, int>> Q_person;
    queue<pair<int, int>> Q_fire;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int j = 0;
        for(char a : s){
            board[i][j] = a;
            if(a == 'J'){
                pair<int, int> person = {i, j};
                Q_person.push(person);
                p_vis[i][j] = 1;
            } else if (a == 'F'){
                pair<int, int> fire = {i, j};
                Q_fire.push(fire);
                f_vis[i][j] = 1;
            }
            j++;
        }

    }

    queue<tuple<int, int, int>> available_pos;

    while(!Q_person.empty()){
        auto cur = Q_person.front(); Q_person.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){ // 탈출 성공
                available_pos.push({cur.first, cur.second, p_vis[cur.first][cur.second]});
            }
            if(board[nx][ny] != '.'|| p_vis[nx][ny] != 0) continue; // 갈 수 없는 공간인 경우, 갔던 공간인 경우
            p_vis[nx][ny] = p_vis[cur.first][cur.second] + 1;
            Q_person.push({nx, ny});
        }
    }

    while(!Q_fire.empty()){
        auto cur = Q_fire.front(); Q_fire.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] == '#') continue; //벽일 경우
            if(f_vis[nx][ny] != 9999) continue; //갔던 공간인 경우
            f_vis[nx][ny] = f_vis[cur.first][cur.second] + 1;
            Q_fire.push({nx, ny});
        }
    }

    while(!available_pos.empty()){
        auto check_cur = available_pos.front(); available_pos.pop();
        int fire_turn;
        fire_turn = f_vis[get<0>(check_cur)][get<1>(check_cur)];
        if(get<2>(check_cur) < fire_turn) {
            cout << get<2>(check_cur);
            return 0;
        }
    }
    cout << "IMPOSSIBLE";

}