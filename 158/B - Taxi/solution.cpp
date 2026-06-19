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
    int cnt = 0;
    int one = 0 ;
    int two = 0 ; 
    int three = 0 ;
    int four = 0 ;
    for(int i = 0 ; i < n ;i++){
      int x ;
      cin >> x ;
    if(x == 1){one ++;}
    else if(x == 2){
        two++;
    }
    else if(x == 3){
        three++;
    }
    else{
        four++;
    } 
    }
    cnt += min(one , three);
    int l = one ;
    one = one - min(one , three);
    three = three - min(l , three);
    while(one > 0 && two > 0){
        if(one >= 2){
            cnt += 1 ;
            one -= 2 ;
            two -- ;
        }
        else{
            cnt += 1 ;
            one -- ;
            two -- ;
        }
    }
    cout << cnt + (one + 3 )/4 + (two + 1 )/2 + three + four ;
}
 
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve() ;
    return 0;
}