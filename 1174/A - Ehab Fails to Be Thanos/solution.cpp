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
void inline print(vector<int> arr ){
  for(int i = 0 ; i < arr.size() ;i++){
    cout << arr[i] << " " ;
  }
}
void inline solve() {
   int n ;
   cin >> n ;
   vector<int> arr ;
  for(int i = 0 ;i < 2*n ; i++){
    int x ;
    cin >> x;
    arr.pb(x);
  }
  sort(all(arr));
  if(arr[0] == arr[2*n-1]){
    cout << -1 ;
    return ;
  }
  print(arr);
 
   
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