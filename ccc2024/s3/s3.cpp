#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    int dp[n][n]; memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++)
        if(a[i] == b[i])
            dp[i][i] = true;
    for(int len = 2; len <= n; len++){
        for(int i = 0, j = i + len - 1; i < n && j < n; i++, j++){
            if(dp[i][j-1] && (a[j] == b[j] || b[j] == b[j-1])) dp[i][j] = true;
            if(dp[i][j-1] && (a[j - 1] == b[j] || a[j - 1] == a[j])) dp[i][j] = true;
            if(dp[i + 1][j] && (a[i] == b[i] || b[i] == b[i + 1])) dp[i][j] = true;
            if(dp[i + 1][j] && (a[i + 1] == b[i] || a[i + 1] == a[i])) dp[i][j] = true;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(dp[i][j-1] && a[j] == b[j]) dp[i][j] = true;
            if(dp[i][j-1] && (a[j - 1] == b[j] || a[j - 1] == a[j])) dp[i][j] = true;
            if(dp[i + 1][j] && a[i] == b[i]) dp[i][j] = true;
            if(dp[i + 1][j] && (a[i + 1] == b[i] || a[i + 1] == a[i])) dp[i][j] = true;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = i - 1; j >= 0; j--){
            if(dp[i][j-1] && a[j] == b[j]) dp[i][j] = true;
            if(dp[i][j-1] && (a[j - 1] == b[j] || a[j - 1] == a[j])) dp[i][j] = true;
            if(dp[i + 1][j] && a[i] == b[i]) dp[i][j] = true;
            if(dp[i + 1][j] && (a[i + 1] == b[i] || a[i + 1] == a[i])) dp[i][j] = true;
        }
    }
    if(dp[0][n-1]) cout << "YES" << "\n";
    else cout << "NO\n";

    return 0;
}