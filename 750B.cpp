#include <bits/stdc++.h>
using namespace std;

//nC1 + nC2 + nC3 + nC4 +......... + nCn = 2^n - 1
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>vec(n,0);
		long long s = 0;
		int zeroes = 0, ones = 0;
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
			s += vec[i];
			if(vec[i] == 0) zeroes++;
			if(vec[i] == 1) ones++;
		}
		//leave one 1 at a time
		//for that 1 take 1 or more zeroes
		// 1, nC1, nC2, nC3 till zeroesCzeroes
		if(!ones){
			cout<<0<<endl;
		}
		else if(!zeroes){
			cout<<ones<<endl;
		}
		else{
			long long ways = pow(2,zeroes);
			cout<<ways*ones<<endl;
		}
	}
	return 0;
}