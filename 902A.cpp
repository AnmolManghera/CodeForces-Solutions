#include <bits/stdc++.h>
using namespace std;

bool compare(pair<long long,long long>&a,pair<long long,long long>&b){
	if(a.second == b.second) return a.first > b.first;
	return a.second <= b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,p;
		cin>>n>>p;
		vector<long long>a(n,0),b(n,0);
		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		}
		priority_queue <pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>>pq; 

		for(int i = 0 ; i < n ; i++){
			cin>>b[i];
			pq.push({b[i],a[i]});
		}

		// while(!pq.empty()){
		// 	pair<long long,long long>curr = pq.top();
		// 	pq.pop();
		// 	cout<<curr.first<<" "<<curr.second<<endl;
		// }

		long long ans = p;

		int leftOver = n-1;

		while(!pq.empty() && leftOver > 0){
			//this pair has the lowest cost
			pair<long long,long long>curr = pq.top();
			pq.pop();
			if(curr.first <= p){
				// cout<<"entering here "<<endl;
				if(leftOver >= curr.second){
					ans += (curr.first * curr.second);
					leftOver -= curr.second;
				}
				else{
					ans += (curr.first * leftOver);
					leftOver = 0;	
				}
			}
			else break;
		}

		if(leftOver){
			ans += (leftOver*p);
		}

		cout<<ans<<endl;
		
	}
}