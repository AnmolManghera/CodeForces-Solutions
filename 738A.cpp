#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		int minEle = INT_MAX;
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
			minEle = min(minEle,vec[i]);
		}
		vector<int>bitPos(32,0);
		int bitIdx = 0;
		while(minEle){
			bitPos[bitIdx] = minEle&1;
			bitIdx++;
			minEle>>=1;
		}
		for(int i = 0 ; i < n ; i++){
			int no = vec[i];
			int bitIdx = 0;
			while(no){
				int isBitSet = no&1;
				bitPos[bitIdx] = (bitPos[bitIdx]) & (isBitSet);
				bitIdx++;
				no>>=1;
			}
		}
		int ans = 0;
		for(int i = 0 ; i <= 31 ; i++){
			if(bitPos[i]){
				ans = ans | (1<<i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}