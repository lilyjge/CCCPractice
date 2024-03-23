#include <bits/stdc++.h>

using namespace std;
const int MM = 300001;
int n, limit; 
unordered_map<int, vector<int>> indexes;
int a[MM], b[MM];
vector<int> needs;
vector<int> used;
bool fun(int lookfor, int curi){ //curi = cur index in a, lookfor = ind of next int in b
    if(lookfor == limit) return true; 
    int target = needs[lookfor];
    int nextind = upper_bound(indexes[target].begin(), indexes[target].end(), curi) - indexes[target].begin();
    if(nextind == indexes[target].size()) return false;
    bool flag = false;
    for(int i = nextind; i < indexes[target].size(); i++){
        used.push_back(indexes[target][i]);
        if(fun(lookfor + 1, indexes[target][i])){
            flag = true;
            break;
        }
        used.pop_back();
    }
    return flag;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++){
        indexes[a[i]].push_back(i);
    }
    for(auto e : indexes){
        sort(indexes[e.first].begin(), indexes[e.first].end());
    }
    int cur = -1;
    for(int i = 0; i < n; i++){
        if(cur != b[i]){
            limit++;
            needs.push_back(b[i]);
            cur = b[i];
        }
    }
    bool ans = fun(0, -1);
    if(ans){
        cout << "YES\n";
        vector<string> anss; int cnt = 0;
        int inb = 0;
        for(int i = 0; i < used.size(); i++){
            cur = a[used[i]]; int temp = inb;
            while(inb < n && b[inb] == cur){
                inb++;
            }
            if(inb < used[i]){
                string s = "L " + to_string(temp) + " " + to_string(used[i]);
                anss.push_back(s); 
            }
            else if(inb > used[i] + 1){
                string s = "R " + to_string(used[i]) + " " + to_string(inb - 1);
                anss.push_back(s); 
            }
            else if(!(temp == inb + 1 && b[inb] == used[i])){
                string s = "L " + to_string(temp) + " " + to_string(inb);
                anss.push_back(s);
            }
        }
        cout << anss.size() << "\n";
        for(string s : anss){
            cout << s << "\n";
        }
    } 
    else cout << "NO\n";

    return 0;
}