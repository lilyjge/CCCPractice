#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k; cin >> k;
    unordered_map<string, char> code;
    for(int i = 0; i < k; i++){
        char a; string b; cin >> a >> b;
        code[b] = a;
    }
    string s, t; cin >> s;
    for(int i = 0; i < s.size(); i++){
        t += s[i];
        if(code.find(t) != code.end()){
            cout << code[t];
            t = "";
        }
    }

    return 0;
}