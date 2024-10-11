#include <bits/stdc++.h>
//ctrl + shift + d
using namespace std;

bool compare(pair<int,int>&a,pair<int,int>&b){ 
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int,vector<int>>ump1;
		unordered_map<int,vector<int>>ump2;
		vector<int>a(n,0);
		int ans = 0;
		int curr;
		cin>>curr;
		int currStreak = 1;
		for(int i = 1 ; i < n  ; i++) {
			cin>>a[i];
			if(a[i] == curr){
				currStreak++;
			}
			else{
				ump1[curr].push_back(currStreak);
				ans = max(ans,currStreak);
				curr = a[i];
				currStreak = 1;

			}
		}
		ump1[curr].push_back(currStreak);
		ans = max(ans,currStreak);
		cin>>curr;
		currStreak = 1;
		vector<int>b(n,0);
		for(int i = 1 ; i < n ; i++) {
			cin>>b[i];
			if(b[i] == curr){
				currStreak++;
			}
			else{
				ump2[curr].push_back(currStreak);
				ans = max(ans,currStreak);
				curr = b[i];
				currStreak = 1;
			}
		}
		ump2[curr].push_back(currStreak);
		ans = max(ans,currStreak);

		for(auto it: ump1){
			if(ump2.find(it.first) != ump2.end()){
				vector<int>temp1 = it.second;
				vector<int>temp2 = ump2[it.first];
				sort(temp1.begin(),temp1.end());
				sort(temp2.begin(),temp2.end());
				ans = max(ans,temp1[temp1.size()-1] + temp2[temp2.size()-1]);
			}
		}
		cout<<ans<<"\n";
	}
}