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
  int ans = 0 ; 
  int n ;
  cin >> n ;
  int odd = 0 ;
  while(n--){
    int x ;
    cin >> x ;
    if(x == -1){
      odd++ ;
    }
    else if(x == 0){
      ans++;
    }
  }
  if(odd % 2 != 0){
    ans += 2 ;
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