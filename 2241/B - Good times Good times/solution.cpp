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
 
ll number(ll n){
  unordered_set<int> st ;
  while(n > 0 ){
   st.insert(n%10);
   n/= 10 ;
  }
  return st.size();
}
 
void solve() {
  int x ;
  cin >> x;
  int cnt = 0 ;
  while(x != 0 ){
    int y = x%10 ;
    cnt++;
    x /= 10 ;
  }
  int z = pow(10 , cnt) + 1 ;
  cout << z ;
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