#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define            pb                push_back
#define          sz(a)               (int)a.size()

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;

		priority_queue<int,vector<int>,greater<int>>pq;

		for(int i = 1 ; i <= n ; i++){
			int no;
			cin>>no;
			pq.push({no+i});
		}


		// for(int i = 0 ; i < n ; i++){
		// 	cout<<vec[i]<<" ";
		// }
		// cout<<endl;
		int ans = 0;
		while(!pq.empty() && c >= pq.top()){
			c -= pq.top();
			pq.pop();
			ans++;
		}

		cout<<ans<<endl;
	}
}