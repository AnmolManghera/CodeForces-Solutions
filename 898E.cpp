#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;


bool isPossible(vector<long long>vec, long long mid, long long maxWater, int n){
	long long ans = 0;
	for(int i = 1 ; i <= n ; i++){
		ans += (mid - min(mid,vec[i]));
		if(ans > maxWater) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long minNo = 1e9+7;
		long long maxWater;
		cin>>maxWater;

		vector<long long>vec(n+2,0);

		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
			minNo = min(minNo,vec[i]);
		}
		
		long long ans = 0;

		long long lo = 1, hi = maxWater + minNo;

		while(lo <= hi){
			long long mid = lo + (hi - lo)/(long long)(2);

			if(isPossible(vec,mid,maxWater,n)){
				ans = mid;
				lo = mid + 1;
			}
			else{
				hi = mid - 1;
			}
		}

		cout<<ans<<endl;
	}
}