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
		map<int,int>mp;

		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			mp[no]++;
		}	

		int ans = 0;

		while(!mp.empty()){
			int start = mp.begin()->first;

			while(true){
				mp[start]--;
				if(mp[start] == 0) mp.erase(start);
				if(mp.find(start+1) == mp.end()) {
					ans++;
					break;
				}
				else{
					start = start+1;
				}
			}
		}

		cout<<ans<<endl;
	}
}