#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;

		vector<vector<int>>vec(m,vector<int>(n,-1));
		for(int in = 0 ; in < n; in++){
			for(int im = 0 ; im < m ; im++){
				cin>>vec[im][in];
			}
		}

		for(int i = 0 ; i < m ; i++){
			sort(vec[i].begin(),vec[i].end());
		}


		long long ans = 0;
		for(int i = 0 ; i < m ; i++){
			// int idx = 1;
			long long pf = 0;
			for(long long j = 0 ; j < n ; j++){
				ans += (j*vec[i][j] - pf);
				pf += vec[i][j];
			}
		}

		cout<<ans<<endl;
	}
}