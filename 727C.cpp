#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
int main(){
	// int t;
	// cin>>t;
	// while(t--){
		
	// }

	long long n,k,x;
	cin>>n>>k>>x;

	vector<long long>vec(n,0);

	for(int i = 0 ; i < n ;i++){
		cin>>vec[i];
	}

	sort(vec.begin(), vec.end());

	vector<long long>groupDiff;
	
	for(int i = 1; i < n ; i++){
		long long diff = vec[i] - vec[i-1];
		if(diff > x){
			groupDiff.push_back(diff);
		}
	}

	sort(groupDiff.begin(), groupDiff.end());

	long long ans = groupDiff.size();

	for(int i = 0 ; i < groupDiff.size() ; i++){
		long long reqd = groupDiff[i]/x;

		if(groupDiff[i] % x == 0) reqd--;
		if(reqd <= k){
			k -= reqd;
			ans--;
		}
		else break;
	}

	cout<<ans+1<<endl;

}