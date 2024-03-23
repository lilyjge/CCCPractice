#include <bits/stdc++.h>

using namespace std;
int dp[5001][5001]; //aysmetric val between i and j
int mounts[5001];
int fun(int l, int r){
    //cout << "left: " << l << " right: " << r << endl;
    if(dp[l][r] != 0) return dp[l][r];
    if(dp[r][l] != 0) return dp[r][l];
    if(l == r || l > r) return 0;
    dp[l][r] = abs(mounts[r] - mounts[l]) + fun(l + 1, r - 1);
    dp[r][l] = dp[l][r];
    return dp[l][r];
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> mounts[i];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        fun(i, n);
        fun(1, n - i);
    }
    /*
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << dp[i][j] << " ";
        cout << endl;
    }*/
    int anss[n + 1]; memset(anss, 0x3f, sizeof(anss));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int cur = dp[i][j];
            anss[abs(i - j)] = min(cur, anss[abs(i - j)]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << anss[i] << " ";
    }

    return 0;
}
