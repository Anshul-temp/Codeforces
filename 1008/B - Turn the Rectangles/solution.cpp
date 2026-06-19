#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define f first
#define s second
 
using ll = long long;
using vi = vector<int>;
using pii = pair<int,int>;
 
const int INF = 1e18;
//const int MOD = 1e9 + 7;
const int MOD = 998244353;
 
void solve() {
    int n ;
  cin >> n ;
  vector<pair<int,int>> nums ;
  for(int i = 0 ; i < n ;i++){
    int x , y ;
    cin >> x >> y ;
    if(x > y)swap(x , y);
    nums.push_back({x, y});
  }
  int prev = INF ;
  for(int i = 0 ; i < n ;i++){
    if(nums[i].f > prev){
      cout << "NO" ;
      return ;
    }
    if(nums[i].s <= prev){
      prev = nums[i].s ;
    }
    else{
      prev = nums[i].f ;
    }
  }
  cout << "YES" ;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
   // cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}