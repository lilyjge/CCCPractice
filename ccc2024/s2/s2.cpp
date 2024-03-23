#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n; cin >> t >> n;
    while(t--){
        unordered_map<char, int> lh;
        char str[n];
        for(int i = 0; i < n; i++){
            cin >> str[i];
            lh[str[i]]++;
        }
        bool good = true;
        for(int i = 0; i < n - 1; i++){
            char c= str[i], nxt = str[i + 1];
            if(lh[c] == 1 && lh[nxt] == 1 || lh[c] > 1 && lh[nxt] > 1){
                good = false;
                break;
            } 
        }
        if(good) cout << "T\n";
        else cout << "F\n";
    }

    return 0;
}