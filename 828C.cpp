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
		char curr;
		cin>>curr;
		string lights;
		cin>>lights;
		int idxOfg = -1;
		for(int i = 0 ; i < n ; i++){
			if(lights[i] == 'g'){
				idxOfg = i;
				break;
			}
		}
		set<int>st;
		for(int i = 0 ; i < n ; i++){
			if(lights[i] == 'g'){
				st.insert(i);
			}
		}
		st.insert(n+idxOfg);

		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			if(lights[i] == curr){
				ans = max(ans,*(st.lower_bound(i)) - i);
			}
		}
		cout<<ans<<"\n";
	}
}