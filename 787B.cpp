#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}
		bool flag = true;
		long long ans = 0;
		for(int i = n-2 ; i >= 0 ; i--){
			while(vec[i] >= vec[i+1]){
				vec[i] = vec[i]/2;
				ans++;
				if(vec[i] == vec[i+1] && vec[i] == 0){
					flag = false;
					break;
				}
			}
			if(vec[i] == vec[i+1] && vec[i] == 0) flag = false;
			if(flag == false) break;
		}
		if(flag == false) cout<<-1<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}