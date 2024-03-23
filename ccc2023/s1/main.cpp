#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int tiles[n][2];
    for(int i = 0; i < n; i++) cin >> tiles[i][0];
    for(int i = 0; i < n; i++) cin >> tiles[i][1];
    int cnt = 0;
    if(tiles[0][0] == 1 && tiles[0][1] == 1){
        cnt += 4;
    }
    else if(tiles[0][0] == 1 || tiles[0][1] == 1){
        cnt += 3;
    }
    for(int i = 1; i < n; i++){
        if(tiles[i][0] == 1 && tiles[i][1] == 1){
            if(tiles[i - 1][0] == 1 && tiles[i - 1][1] == 1){
                if(i % 2 != 0) cnt += 2;
                //else
            }
            else if(tiles[i - 1][0] == 1 || tiles[i - 1][1] == 1){
                if(i % 2 == 0) cnt += 2;
                else cnt += 4;
            }
            else{
                if(i % 2 == 0) cnt += 4;
                else cnt += 6;
            }
        }
        else if(tiles[i][0] == 1){
            if(tiles[i - 1][0] == 1) cnt += 1;
            else cnt += 3;
        }
        else if(tiles[i][1] == 1){
            if(tiles[i - 1][1] == 1) cnt += 1;
            else cnt += 3;
        }
        //cout << "col: " << i << " top: " << tiles[i][0] << " bot: " << tiles[i][1] << " cnt: " << cnt << endl;
    }
    cout << cnt << "\n";

    return 0;
}
