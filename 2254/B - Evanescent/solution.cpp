#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
 
using ll = long long;
using vi = vector<int>;
using pii = pair<int,int>;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
// const int MOD = 998244353;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int runs = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1])
            runs++;
    }
 
    int ans = runs;
 
    for (int i = 1; i <= n - 2; i++) {
 
        bool merge = (s[i - 1] == s[i + 1] && s[i] != s[i - 1]);
 
        bool single = false;
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            single = true;
        }
 
        if (merge)
            ans = min(ans, runs - 2);
        else if (single)
            ans = min(ans, runs - 1);
    }
 
    cout << ans ;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t--) {
        solve();
        cout << endl ;
    }
 
    return 0;
}