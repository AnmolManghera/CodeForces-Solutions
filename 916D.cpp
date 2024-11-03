#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
int maxFunc(priority_queue<pair<int,int>>first,priority_queue<pair<int,int>>second,priority_queue<pair<int,int>>third){
	// we pick from first, go to second, then to third
	int ans = first.top().first;
	int idx1 = first.top().second;

	while(second.size() && second.top().second == idx1){
		second.pop();
	}

	ans += second.top().first;
	int idx2 = second.top().second;

	while(third.size() && (third.top().second == idx1 || third.top().second == idx2)){
		third.pop();
	}
	ans += third.top().first;
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// vector<pair<int,int>>a(n,0), b(n,0), c(n,0);
		priority_queue<pair<int,int>>pqa,pqb,pqc;
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			pqa.push({no,i});
			// a[i] = {no,i};
		}
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			// b[i] = {no,i};
			pqb.push({no,i});
		}
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			// c[i] = {no,i};
			pqc.push({no,i});
		}
		
		int ans = 0;
		ans = max(ans, maxFunc(pqa,pqb,pqc));
		ans = max(ans, maxFunc(pqa,pqc,pqb));
		ans = max(ans, maxFunc(pqb,pqa,pqc));
		ans = max(ans, maxFunc(pqb,pqc,pqa));
		ans = max(ans, maxFunc(pqc,pqb,pqa));
		ans = max(ans, maxFunc(pqc,pqa,pqb));
		cout<<ans<<endl;
	}
}