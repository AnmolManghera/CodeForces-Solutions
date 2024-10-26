#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	int t;
	cin>>t;
	vector<vector<int>>cp(1001, vector<int>(1001, -1));
	for(int i = 1 ; i <= 1000 ; i++){
		for(int j = 1 ; j <= 1000 ; j++){
			if(__gcd(i,j) == 1){
				cp[i][j] = 1;
			}
		}
	}
	while(t--){
		int n;
		cin>>n;

		vector<int>vec(n+1,0);
		vector<int>occur[1001];

		vector<bool>exists(1001,0);
		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
			occur[vec[i]].push_back(i);
			exists[vec[i]] = 1;
		}

		for(auto &it : occur){
			sort(it.begin(),it.end());
		}

		// for(auto it : occur){
		// 	for(int i : it){
		// 		cout<<i<<" ";
		// 	}
		// 	cout<<endl;
		// }

		int ans = -1;

		vector<bool>vis(1001,0);

		for(int i = 1 ; i <= n ; i++){
			int no = vec[i];
			// if(vis[no]) continue;
			// vis[no] = 1;

			for(int otherNo = 1 ; otherNo <= 1000 ; otherNo++){
				if(cp[no][otherNo] == 1 && exists[otherNo] == 1){
					// find idx of otherNo
					// int firstIdxNo = occur[no].front();
					int lastIdxNo = occur[no].back();
					// int firstIdxOtherNo = occur[otherNo].front();
					int lastIdxOtherNo = occur[otherNo].back();

					ans = max(ans,lastIdxNo+lastIdxOtherNo);
				}
			}
		}

		cout<<ans<<endl;

	}
}