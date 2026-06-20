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
  int a , b , xk , yk , xq , yq ;
  cin >> a >> b >> xk >> yk >> xq >> yq ;
  set<pii> st ;
  vi dr = {1 , 1 , -1 , -1};
  vi dc = {1 , -1 , 1 , -1};
  for(int i = 0 ; i < 4 ; i++){
    int r = dr[i]*a + xk;
    int c = dc[i]*b + yk ;
    int x = dr[i]*b + xk ;
    int y = dc[i]*a + yk ;
    st.insert({r, c});
    st.insert({x , y});
  }
  int cnt = 0 ;
  set<pii> queen ;
  for(int i = 0 ; i < 4 ; i++){
     int r = dr[i]*a + xq ;
    int c = dc[i]*b + yq ;
    int x = dr[i]*b + xq ;
    int y = dc[i]*a + yq ;
    queen.insert({r, c});
    queen.insert({x , y});
  }
  for(auto& i : queen){
    if(st.find(i) != st.end()){
      cnt++;
    }
  }
  
  cout << cnt ;
 
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