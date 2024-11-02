#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;

		vector<int>vec(n+1,0);

		vector<long long>ps(n+1,0);

		vector<int>biggestSoFar(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
			ps[i] = ps[i-1] + vec[i];
			biggestSoFar[i] = max(vec[i],biggestSoFar[i-1]);
		}

		while(q--){
			int qr;
			cin>>qr;

			//find first value greater than qr
			int idx = upper_bound(biggestSoFar.begin(), biggestSoFar.end(), qr) - biggestSoFar.begin();

			cout<<ps[idx-1]<<" ";
		}
		cout<<endl;
	}
}