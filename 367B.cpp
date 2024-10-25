#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	// int t;
	// cin>>t;
	// while(t--){
		int n;
		cin>>n;
		
		vector<int>vec(n,0);

		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}

		sort(vec.begin(), vec.end());

		int q;
		cin>>q;

		while(q--){
			int d;
			cin>>d;

			cout<<upper_bound(vec.begin(),vec.end(),d) - vec.begin()<<endl;
		}
	// }
}