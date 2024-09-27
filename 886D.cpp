#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		int currMaxStreak = 1;
		int currStreak = 1;
		for(int i = 1 ; i < n ; i++){
			if(vec[i]-vec[i-1] <= k){
				currStreak++;
				currMaxStreak = max(currStreak,currMaxStreak);
			}
			else{
				currStreak = 1;
			}
		}
		currMaxStreak = max(currStreak,currMaxStreak);
		cout<<n-currMaxStreak<<endl;
	}
	return 0;
}