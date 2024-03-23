#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    char ans[n + 1], correct[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> ans[i];
    for(int i = 1; i <= n; i++)
        cin >> correct[i];
    int s = 0;
    for(int i = 1; i <= n; i++)
        s += (ans[i] == correct[i]);
    cout << s << "\n";

    return 0;
}