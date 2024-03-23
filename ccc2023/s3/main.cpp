#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
typedef long long ll;
int p[2001];
int find_set(int d){
    if(d != p[d])
        p[d] = find_set(p[d]);
    return p[d];
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) p[i] = i;
    vector<pair<int, pair<int, pi>>> edges;
    int cur[n + 1][m + 1]; memset(cur, 0x3f, sizeof(cur));
    for(int i = 0; i < m; i++){
        int u, v, l, c;
        cin >> u >> v >> l >> c;
        edges.push_back({c, {l, {u, v}}});
        cur[u][v] = min(cur[u][v], l);
        cur[v][u] = cur[u][v];
    }
    sort(edges.begin(), edges.end(), [](pair<int, pi> x, pair<int, pi> y){return x.first < y.first;});
    ll ans = 0;
    for(int i = 0; i < edges.size(); i++){
        auto e = edges[i];
        int c = e.first, tl = e.second.first, u = e.second.second.first, v = e.second.second.second;
        int fu = find_set(u), fv = find_set(v);
        if(fu != fv && tl <= cur[u][v]){
            p[fu] = fv;
            ans += c;
        }
    }
    cout << ans << "\n";

    return 0;
}
