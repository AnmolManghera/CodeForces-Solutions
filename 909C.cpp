#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

bool isSameParity(int a, int b){
	return (a%2 == 0 && b%2 == 0) || (a%2 == 1 && b%2 == 1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int>vec(n,0);

		bool allNeg = true;
		int largestNo = -1001;

		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
			if(vec[i] > 0) allNeg = false;
			largestNo = max(largestNo,vec[i]);
		}

		if(allNeg){
			cout<<largestNo<<endl;
			continue;
		}

		int currSum = vec[0];

		int ans = currSum;
		
		for(int i = 1 ; i < n ; i++){
			if(isSameParity(abs(vec[i]),abs(vec[i-1])) || currSum < 0){
				currSum = 0;
			}
			currSum += vec[i];
			ans = max(ans,currSum);
		}

		cout<<ans<<endl;
	}
}