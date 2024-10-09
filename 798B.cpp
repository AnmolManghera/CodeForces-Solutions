#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n+1,0);
		priority_queue <int, vector<int>, greater<int>>pq; 
		for(int i = 1 ; i <= n ; i++) {
			cin>>vec[i];
			pq.push(i);
		}
		if(n == 1){
			cout<<-1<<endl;
			continue;
		}
		vector<int>ans(n+1,0);
		for(int i = 1 ; i < n ;i++){
			if(pq.top() == vec[i]){
				int temp = pq.top();
				pq.pop();
				ans[i] = pq.top();
				// cout<<pq.top()<<" ";
				pq.pop();
				pq.push(temp);
			}
			else{
				// cout<<pq.top()<<" ";
				ans[i] = pq.top();
				pq.pop();
			}
		}
		if(pq.top() == vec[n]){
			ans[n] = ans[n-1];
			ans[n-1] = pq.top();
			pq.pop();
		}
		else{
			ans[n] = pq.top();
			pq.pop();
		}
		for(int i = 1 ; i <= n ; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}