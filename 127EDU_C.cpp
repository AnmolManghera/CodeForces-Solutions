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
		long long x;
		cin>>x;
		vector<int>vec(n+1,0);

		vector<long long>ps(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
		}

		sort(vec.begin(),vec.end());

		for(int i = 1 ; i <= n ; i++){
			ps[i] = ps[i-1] + vec[i];
		}

		long long ans = 0;
		for(long long i = n ; i >= 1; i--){
			if(ps[i] <= x){
				long long val = (((x - ps[i])/i) + 1);
				ans += val;
			}
		}

		cout<<ans<<endl;
	}

}