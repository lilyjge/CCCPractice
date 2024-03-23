#include <bits/stdc++.h>

using namespace std;
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    if(a == b && a == c && a == d) cout << 4 << "\n";
    else{
        if(a + b == c * 2 && a + b == d * 2 ||
                a + c == b * 2 && a + c == d * 2 ||
                c + d == a * 2 && c + d == b * 2 ||
                b + d == c * 2 && b + d == a * 2) 
                    cout << 3 << "\n";
        else if(a + b == c + d || a + c == b + d) 
            cout << 2 << "\n";
        else if(a + b + c == d * 3|| a + b + d == c * 3 || a + d + c == b * 3|| d + b + c == a * 3)
            cout << 2 << "\n";
        else cout << 1 << "\n";
    }
    

    return 0;
}