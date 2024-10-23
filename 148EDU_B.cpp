#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		vector<int>vec(n+1,0);
		for(int i = 1 ;i <= n ; i++){
			cin>>vec[i];
		}
		sort(vec.begin(), vec.end());
		vector<long long>prefixSum(n+1,0);
		for(int i = 1 ;i <= n ; i++){
			prefixSum[i] = prefixSum[i-1] + vec[i];
		}

		int lastIdx = n;
		long long ans = 0;

		for(int i = 2*k + 1; i > 0; i-=2){
			long long val = prefixSum[lastIdx] - prefixSum[i-1];
			ans = max(ans,val);
			lastIdx--;
		}

		cout<<ans<<endl;
	}
}