#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}
		int ans = vec[n-1]-vec[0];
		for(int i = 1 ; i < n ; i++){
			ans = max(ans,vec[i-1]-vec[i]);
		}
		int maxAfterLeavingFirst = 0;
		for(int i = 1 ; i < n ; i++){
			maxAfterLeavingFirst = max(maxAfterLeavingFirst,vec[i]);
		}
		ans = max(ans,maxAfterLeavingFirst-vec[0]);

		int minAfterLeavingLast = 1000;
		for(int i = n-2 ; i >= 0 ; i--){
			minAfterLeavingLast = min(minAfterLeavingLast,vec[i]);
		}
		ans = max(ans,vec[n-1] - minAfterLeavingLast);
		cout<<ans<<endl;
	}
	return 0;
}