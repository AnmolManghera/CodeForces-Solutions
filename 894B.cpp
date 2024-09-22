#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int prev;
		cin>>prev;
		vector<int>ans;
		ans.push_back(prev);
		for(int i = 1 ; i < n ;i++){
			int curr;
			cin>>curr;
			ans.push_back(curr);
			if(curr < prev){
				ans.push_back(curr);
			}
			prev = curr;
		}
		cout<<ans.size()<<endl;
		for(int i = 0 ; i < ans.size() ; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}