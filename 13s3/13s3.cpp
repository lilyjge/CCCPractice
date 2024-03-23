#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
int cnt, t, g;
void fun(set<pi> toplay, vector<int> pts){
    if(toplay.size() == 0){
        for(int i = 1; i <= 4; i++){
            if(t != i && pts[t] <= pts[i])
                return;
        }
        cnt++;
    }
    else{
        auto itr = toplay.begin();
        pi game = *itr;
        toplay.erase(itr);
        int a = game.first, b = game.second;
        pts[a] += 3;
        fun(toplay, pts);
        pts[a] -= 3; pts[b] += 3;
        fun(toplay, pts);
        pts[b] -= 3; 
        pts[a]++; pts[b]++;
        fun(toplay, pts);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t >> g;
    set<pi> games;
    games.insert({1, 2});
    games.insert({1, 3});
    games.insert({1, 4});
    games.insert({2, 3});
    games.insert({2, 4});
    games.insert({3, 4});
    vector<int> pts(5);
    for(int i = 0; i < g; i++){
        int a, b, sa, sb; cin >> a >> b >> sa >> sb;
        if(sa > sb) pts[a] += 3;
        else if(sb > sa) pts[b] += 3;
        else{
            pts[a]++;
            pts[b]++;
        }
        games.erase({min(a, b), max(a, b)});
    }
    fun(games, pts);
    cout << cnt << "\n";

    return 0;
}