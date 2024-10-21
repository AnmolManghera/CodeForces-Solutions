#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

long long func(int k, vector<long long>prefixSum, int n){
	long long minVal = prefixSum[n], maxVal = 0;
	for(int i = k ; i <= n ; i += k){
		long long currVal = prefixSum[i] - prefixSum[i-k];
		minVal = min(currVal,minVal);
		maxVal = max(currVal,maxVal);
	}
	return maxVal - minVal;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<long long>prefixSum(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			long long no;
			cin>>no;
			prefixSum[i] = prefixSum[i-1] + no;
		}


		long long ans = 0;

		for(int k = 1 ; k <= n/2 ; k++){
			if(n%k == 0){
				ans = max(ans, func(k,prefixSum,n));
			}
		}

		cout<<ans<<endl;
	}
}