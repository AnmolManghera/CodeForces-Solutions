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
		vector<pair<int,int>>vec(n+1,{-1,-1});

		for(int i = 1 ; i <= n ; i++){
			int no;
			cin>>no;
			vec[i] = {no,i};
		}

		sort(vec.begin(),vec.end());

		vector<long long>prefixSum(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			prefixSum[i] = prefixSum[i-1] + vec[i].first;
		}

		vector<int>canGoUpto(n+1,-1);

		canGoUpto[n] = n;

		vector<int>ans(n+1,0);
		ans[vec[n].second] = n-1;

		for(int i = n-1 ; i >= 1 ; i--){
			if(prefixSum[i] >= vec[i+1].first){
				canGoUpto[i] = canGoUpto[i+1];
			}
			else{
				canGoUpto[i] = i;
			}
			ans[vec[i].second] = canGoUpto[i] - 1;
		}

		for(int i = 1 ; i <= n ; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}