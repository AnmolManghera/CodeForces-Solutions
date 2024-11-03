#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

bool compare(pair<int,int>&a, pair<int,int>&b){
	return abs(a.first - a.second) > abs(b.first - b.second);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;

		vector<int>p(m,0);

		for(int i = 0 ; i < m ; i++){
			cin>>p[i];
		}

		sort(p.begin(), p.end());

		vector<pair<int,int>>vec;

		for(int i = 1 ; i < m ; i++){
			vec.push_back({p[i-1],p[i]});
		}

		int val = n - p[m-1] + 1;
		vec.push_back({(p[m-1] +val) % n , p[0] + val});

		sort(vec.begin(), vec.end(), compare);
			
		long long time = 0, safe = 0;	

		// for(int i = 0 ; i < vec.size() ; i++){
		// 	cout<<vec[i].first<<" "<<vec[i].second<<endl;
		// }

		for(int i = 0 ; i < vec.size() ; i++){
			auto it = vec[i];

			long long start = it.first, end = it.second;

			start += time;
			end -= time;

			time += 2;

			// how many between start+2 and end-1 , including both ?
			if(end - start == 2) safe += 1;
			else safe += max(0*1ll, end-start-2);

		}

		cout<<n - safe<<endl;

	}
}