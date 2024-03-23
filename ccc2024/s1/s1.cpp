#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int hats[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> hats[i];
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i <= n / 2 && hats[i] == hats[n/ 2 + i]) cnt++;
        else if(i > n/2 && hats[i] == hats[i - n/2]) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}