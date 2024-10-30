#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		priority_queue<pair<long long,int>>pq;
		for(int i = 1 ; i <= n ; i++){
			long long no;
			cin>>no;
			pq.push({no,i});
		}
		vector<int>ans(n+2,-1);
		map<int,int>mp;
		mp[0] = 0;
		long long currRightIdx = 1, currLeftIdx = -1;
		long long leftSum = 0, rightSum = 0;
		while(!pq.empty()){
			pair<long long,int>curr = pq.top();
			pq.pop();

			//if leftSum >= rightSum, we place on the right;

			if(abs(currLeftIdx) >= currRightIdx){
				//place on right
				mp[curr.second] = currRightIdx;
				rightSum += (2*abs(currRightIdx)*(curr.first));
				currRightIdx++;
			}
			else{
				mp[curr.second] = currLeftIdx;
				leftSum += (2*abs(currLeftIdx)*(curr.first));
				currLeftIdx--;
			}
		}
		cout<<leftSum+rightSum<<endl;
		for(int i = 0 ; i <= n ; i++){
			cout<<mp[i]<<" ";
		}
		cout<<endl;
	}
}