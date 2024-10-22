#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long totalC;
		cin>>totalC;

		vector<long long>vec(n,0);

		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}
		
		long long ans = 0;

		long long lo = 1, hi = 1e9;

		while(lo <= hi){
			long long mid = lo + (hi - lo)/2;

			long long curr = 0;
			for(int i = 0 ; i < n ; i++){
				curr += (vec[i] + 2*mid)*(vec[i] + 2*mid);
				if(curr > totalC){
					break;
				}
			}
			if(curr == totalC){
				ans = mid;
				break;
			}
			else if(curr > totalC){
				hi = mid - 1;
			}
			else{
				lo = mid + 1;
			}
		}

		cout<<ans<<endl;
	}
}