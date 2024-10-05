#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>vec(n*k+1,0);
		for(int i = 1 ; i <= n*k ; i++){
			cin>>vec[i];
		}
		int arrSize = n;
		int medianIdx = arrSize/2;

		if(arrSize%2) medianIdx++;

		int i = 1, j = n*k;

		long long ans = 0;

		while(k--){
			//can arr[j] be the median ?
			// skip arrSize - medianIdx elements from back
			for(int i = 0 ; i < arrSize - medianIdx; i++){
				j--;
			}
			ans += vec[j];				
			j--;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}