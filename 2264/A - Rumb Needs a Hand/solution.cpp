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
 
    vector<int> arr;
 
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
 
        if(x != i)
            arr.pb(x);
    }
 
    reverse(all(arr));
 
    for(int i = 0; i + 1 < arr.size(); i++) {
        if(arr[i] > arr[i + 1]) {
            cout << "NO";
            return;
        }
    }
 
    cout << "YES";
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