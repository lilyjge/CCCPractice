#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
set<ll> nums;
void fun(double st, double ed){
    double sec = (ed - st) / 3.0;
    if(2 * sec < 1) return;
    else{
        for(ll ms = st + (ll)sec + 1; ms < st + (ll) 2 * sec; ms++){
            nums.erase(ms);
        }
        //cout << "calling " << st << " and " << st + sec << endl;
        fun(st, st + sec);
        //cout << "calling " << 2 * sec + st << " and: " << ed << endl;
        fun(2 * sec + st, ed);
    }
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i <= n; i++) nums.insert(i);

    fun(0, n);
    for(ll x : nums) cout << x << "\n";

    return 0;
}
