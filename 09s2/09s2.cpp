#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, l; cin >> r >> l;
    int lights[r + 1][l + 1]; memset(lights, 0, sizeof(lights));
    for(int i = r; i >= 1; i--){
        for(int j = 1; j <= l; j++){
            cin >> lights[i][j];
        }
    }   
    unordered_set<string> patterns;
    for(int i = 1; i <= r; i++){
        int arr[l + 1] = {}; 
        for(int j = 1; j <= l; j++) 
            arr[j] = lights[i][j];
        for(int j = i - 1; j >= 1; j--){
            for(int k = 1; k <= l; k++){
                arr[k] = arr[k] ^ lights[j][k];
            }
        }
        string s;
        for(int k = 1; k <= l; k++) s += arr[k] + '0';
        patterns.insert(s);
    }
    cout << patterns.size() << "\n";

    return 0;
}