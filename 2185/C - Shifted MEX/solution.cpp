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
  int n ; 
  cin >> n ;
  vector<int> arr(n);
  for(auto& i : arr) cin >> i ;
  sort(all(arr));
  arr.erase(unique(all(arr)), arr.end());
  int l = 0 ; 
  int r = 0 ;
  int maxi = 0 ;
  n = arr.size();
  while(r<n){
    while(arr[r] - arr[l] >= r - l + 1){
      l++;
    }
    maxi = max(maxi , r-l+1);
    r++;
  }
  cout << maxi ;
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