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
  int n , k;
  cin >> n >> k; 
  vi arr ;
  for(int i = 0 ; i < n ; i++){
    int  x;
    cin >> x ;
    arr.pb(x);
  }
  sort(all(arr));
  int l = 0 ;
  int r = 1;
  int cnt = 0 ;
  int ans = 0 ;
  while(r < n){
     if(arr[r] - arr[r-1] > k){
      ans = max(ans , r- l  );
      l = r ;
     }
r++;
  }
  ans = max(ans , n- l);
  cout << n - ans ;
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