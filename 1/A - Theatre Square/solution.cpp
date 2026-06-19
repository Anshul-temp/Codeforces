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
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n , m , a ;
    cin >> n >> m >> a;
    ll pro = ((n+a-1)/a)*((a + m  -1)/a);
    cout << pro ;
    
    
 
    return 0;
}