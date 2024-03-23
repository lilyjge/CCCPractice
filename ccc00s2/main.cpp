#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<double> rivers(103);
    for(int i = 0; i < n; i++) cin >> rivers[i];
    while(true){
        int cmd; cin >> cmd;
        if(cmd == 99){
            int x; double y;
            cin >> x >> y;
            rivers.insert(rivers.begin() + x, rivers[x - 1] * (1 - 0.01 * y));
            rivers[x - 1] *= 0.01 * y;
        }
        else if(cmd == 88){
            int j;
            cin >> j;
            rivers[j - 1] += rivers[j];
            rivers.erase(rivers.begin() + j);
        }
        else break;
    }

    for(int i = 0; i < rivers.size(); i++){
        if(rivers[i] == 0) break;
        cout << round(rivers[i]) << " ";
    }

    return 0;
}
