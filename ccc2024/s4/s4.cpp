#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
const int MM = 2 * 1e5 + 1;
int n, m;
vector<int> adj[MM];
char arr[MM];
map<pi, int> edges;
bool vis[MM];
void dfs(int u, int prev, int c){
    if(vis[u]) return;
    vis[u] = true;
    for(int v : adj[u]){
        int idx = edges[{min(u, v), max(u, v)}];
        if(vis[v] && v != prev){
            arr[idx] = 'G';
            continue;
        }
        if(c == 0) arr[idx] = 'R';
        else arr[idx] = 'B';
        dfs(v, u, 1 - c);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 1;i <= m; i++){
        int a, b; cin >> a >> b;
        edges[{min(a, b), max(a, b)}] = i;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0, 0);
    for(int i = 1; i <= m; i++) cout << arr[i];

    return 0;
}