#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int mounts[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> mounts[i];
    int dif[n + 1][n + 1]; //completely unnecessary????
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            dif[i][j] = abs(mounts[i] - mounts[j]);
        }
    }
    int ans[n + 1]; memset(ans, 0x3f, sizeof(ans));
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int l = i, r = i; l >= 1 && r <= n; l--, r++){
            cnt += dif[l][r];
            ans[r - l] = min(ans[r - l], cnt);
        }
        cnt = 0;
        for(int l = i, r = i + 1; l >= 1 && r <= n; l--, r++){
            cnt += dif[l][r];
            ans[r - l] = min(ans[r - l], cnt);
        }
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";

    return 0;
}