#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    ll strl = lcm(s.size(), t.size());
    ll ms = strl / s.size();
    ll mt = strl / t.size();
    s = " " + s; t = " " + t;
    unordered_map<char, vector<int>> ns;
    unordered_map<char, vector<int>> nt;
    for(int i = 1; i < s.size(); i++){
        ns[s[i]].push_back(i);
    }
    for(int i = 1; i < t.size(); i++){
        nt[t[i]].push_back(i);
    }
    ll ans = 0;
    for(auto e : ns){
        char c = e.first; 
        vector<int> ss = e.second;
        vector<int> tt = nt[c];
        int i = 0, j = 0;
        while(i < ss.size() && j < tt.size()){
            int cur, idx;
            if(ss[i] == tt[j]){
                idx = ss[i];
            }
            else idx = lcm(ss[i], tt[j]);
            cur = idx;
            while(cur < strl){
                ans++;
                cur += idx;
            }
        }
    }
    ans *= (s.size() - 1) * n / strl;
    cout << ans << "\n";

    return 0;
}