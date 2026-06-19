#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    vector<int> arr ;
	    for(int i = 0 ; i < n ; i++){
	        int x ;
	        cin >> x;
	        arr.push_back(x);
	    }
	    vector<int> ans(n , 0);
	    int mini = arr[0] ;
	    ans[0] = arr[0] ;
	    for(int i = 1 ; i < n ; i++){
	        mini = min(arr[i-1] , mini);
	        if(arr[i] > mini ){
	            ans[i] = mini ;
	        }
	        else{
	            ans[i] = arr[i] ;
	        }
	    }
	    int sum = accumulate(ans.begin(),ans.end() , 0);
	    cout << sum << endl ;
	}
 
}