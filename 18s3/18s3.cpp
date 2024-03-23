#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    char grid[n + 1][m + 1];
    vector<pi> cams;
    int sx, sy;
    int dis[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
            dis[i][j] = 1e9;
            if(grid[i][j] == 'C') cams.push_back({i, j});
            if(grid[i][j] == 'S'){
                sx = i;
                sy = j;
                dis[i][j] = 0;
            }
        }
    }
    int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for(pi e : cams){
        int x = e.first, y = e.second;
        for(int k = 0; k < 4; k++){
            int nx = x + dir[k][0], ny = y + dir[k][1];
            while(grid[nx][ny] != 'W'){
                if(grid[nx][ny] == '.') dis[nx][ny] = -1;
                nx += dir[k][0];
                ny += dir[k][1];
            }
        }
    }
    queue<pi> q;
    bool vis[n + 1][m + 1]; memset(vis, 0, sizeof(vis));
    q.push({sx, sy});
    while(!q.empty()){
        pi e = q.front(); q.pop();
        int x = e.first, y = e.second;
        if(grid[x][y] == 'W' || dis[x][y] == -1 || vis[x][y]) continue;
        vis[x][y] = true;
        for(int k = 0; k < 4; k++){
            int nx = x + dir[k][0], ny = y + dir[k][1];
            if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if(grid[nx][ny] == 'W' || dis[nx][ny] == -1 || vis[nx][ny]) continue;
            if(grid[nx][ny] == 'L' && grid[nx][ny - 1] != 'R'){
                
                q.push({nx, ny - 1}); 
            } 
            if(grid[nx][ny] == 'R' && grid[nx][ny + 1] != 'L') q.push({nx, ny + 1});
            if(grid[nx][ny] == 'U' && grid[nx - 1][ny] != 'D') q.push({nx - 1, ny});
            if(grid[nx][ny] == 'D' && grid[nx + 1][ny] != 'U') q.push({nx + 1, ny});

        }
    }


    return 0;
}