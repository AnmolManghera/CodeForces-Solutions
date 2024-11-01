#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

bool compare(pair<int,int>&a, pair<int,int>&b){
	// if(a.second == b.second){
		return a.first < b.first;
	// }
	// return a. < b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		// cout<<"hi";
		int n;
		cin>>n;

		// cout<<"hi"<<endl;

		int m = (n*(n-1))/2;

		unordered_map<int,int>ump;

		for(int i = 0 ; i < m ; i++){
			int no;
			cin>>no;
			ump[no]++;
		}

		vector<pair<int,int>>freq;

		for(auto it : ump){
			freq.push_back(it);
		}

		sort(freq.begin(), freq.end() , compare);

		int biggerThan = n-1;

		vector<int>ans;

		for(int i = 0 ; i < freq.size() ; i++){
			pair<int,int>p = freq[i];
			int currFreq = p.second;

			// cout<<p.first<<" "<<p.second<<endl;

			while(currFreq){
				ans.push_back(p.first);
				currFreq -= biggerThan;
				biggerThan--;
			}
		}


		ans.push_back(ans[ans.size() - 1]);
		// cout<<"hi"<<endl;
		for(int i = 0 ;i < n ; i++){
			cout<<ans[i]<<" ";
		}

		cout<<endl;

	}
}