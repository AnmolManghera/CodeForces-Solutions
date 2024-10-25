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
		
		vector<int>vec(n,0);

		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}

		sort(vec.begin(), vec.end());

		long long maxSum = 1;

		if(vec[0] != 1){
			cout<<"NO"<<endl;
			continue;
		}

		bool ans = true;

		for(int i = 1 ; i < n ; i++){
			if(vec[i] > maxSum){
				ans = false;
				break;
			}
			maxSum += vec[i];
		}

		if(ans){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
}