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
	int n, k ;
	cin >> n >> k ;
	unordered_map<char, int> mp ;
	string s ;
	cin >> s;
	for(auto& i : s) {
		mp[i] ++ ;
	}
	int cnt = 0 ;
	for(auto& i : mp) {
		if(i.S % 2 != 0) {
			cnt++;
		}
	}
	if(k >= cnt - 1){
    cout << "YES" ;
    return ;
  }
cout << "NO" ;
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