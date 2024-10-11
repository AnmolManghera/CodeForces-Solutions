#include <bits/stdc++.h>
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
		int k;
		cin>>k;
		vector<pair<int,int>>vec;
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			// while(no - k > 0){
			// 	no = no - k;
			// }
			// // no = no - k;

			if(no%k == 0){
				no = 0;
			}
			else {
				int div = no/k + 1;
				no = no - div*k;
			}

			vec.push_back({no,i});
		}
		sort(vec.begin(),vec.end(),compare);
		
		for(int i = 0 ; i < n ;i++){
			cout<<(vec[i].second + 1)<<" ";
		}

		cout<<"\n";
	}
}