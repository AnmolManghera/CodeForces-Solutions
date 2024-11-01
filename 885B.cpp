#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>planks[k+1];
		for(int i = 1 ; i <= k ; i++){
			planks[i].push_back(0);
		}
		for(int i = 1 ; i <= n ; i++){
			int no;
			cin>>no;
			planks[no].push_back(i);
		}
		for(int i = 1 ; i <= k ; i++){
			planks[i].push_back(n+1);
		}

		int ans = n+2;

		for(int i = 1; i <= k ; i++){
			int max1 = -1, max2 = -1;
			for(int j = 1 ; j < planks[i].size() ; j++){
				int val = planks[i][j] - planks[i][j-1] - 1;
				if(max1 == -1){
					max1 = val;
				}
				else if(max2 == -1){
					if(max1 < val){
						max2 = max1;
						max1 = val;
					}
					else{
						max2 = val;
					}
				}
				else{
					if(val > max1){
						max2 = max1;
						max1 = val;
					}
					else if(val > max2){
						max2 = val;
					}
				}
			}
			// cout<<max1<<" "<<max2<<endl;
			ans = min(max(max2, max1/2), ans);
		}

		cout<<ans<<endl;
	}
}