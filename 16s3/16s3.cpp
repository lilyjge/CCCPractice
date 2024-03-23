#include <bits/stdc++.h>

using namespace std;
const int MM = 1e5 + 3;
int n, m;
int dia, far;
bool pho[MM];
vector<int> adj[MM];

void needvisit(int u, int prev){
    for(int v : adj[u]){
        if(v == prev) continue;
        needvisit(v, u);
        if(pho[v]) pho[u] = true;
    }
}

void dfs(int u, int prev, int d){
    if(d > dia){
        dia = d;
        far = u;
    }
    for(int v : adj[u]){
        if(v != prev && pho[v])
            dfs(v, u, d + 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int p; cin >> p;
        pho[p] = true;
    }
    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int st;
    for(int i = 0; i < n; i++){
        if(pho[i]){
            st = i; break;
        }
    }
    needvisit(st, -1); 
    dfs(st, -1, 0);
    dia = 0;
    dfs(far, -1, 0);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(pho[i]) cnt++;
    }
    cout << 2 * (cnt - 1) - dia << "\n";

    return 0;
}