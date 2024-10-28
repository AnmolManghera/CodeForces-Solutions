#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int>vec(n,0);

		priority_queue<int>pq;

		long long ans = 0;
		for(int i = 0 ;i < n ; i++){
			cin>>vec[i];
			if(vec[i] != 0){
				pq.push(vec[i]);
			}
			else{
				if(pq.empty()) continue;
				ans += pq.top();
				pq.pop();
			}
		}
		cout<<ans<<endl;
	}
}