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
		string s;
		cin>>s;

		long long ans = 0;

		unordered_set<int>st;
		for(int i = 1 ; i <= n; i++){
			st.insert(i);
		}

		vector<int>vis(n+1,0);

		for(int k = 1 ; k <= n ; k++){
			// what numbers can we remove with current k
			for(int no = k ; no <= n ; no += k){
				if(vis[no] == 1) continue;
				if(s[no-1] == '1') break;
				if(s[no-1] == '0' && vis[no] == 0){
					ans += k;
					vis[no] = 1;
				}
			}
		}	

		cout<<ans<<endl;
	}
}