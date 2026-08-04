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
  int n  ;
  cin >> n ;
  string a ;
  cin >> a ;
  string b ;
  cin >> b ;
  int odd = 0 ;
  int even = 0 ;
  for(int i = 0  ; i < n ; i++){
    if(i % 2 == 0){
      if(a[i] == '1'){
        even++;
      }
      if(b[i] == '1'){
        even-- ;
      }
    }
    if(i % 2 != 0){
      if(a[i] == '1'){
        odd++;
      }
      if(b[i] == '1'){
        odd-- ;
      }
    }
  }
  if(odd == 0 && even == 0){
    cout << "YES" ;
    return ;
  }
  cout << "NO";
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