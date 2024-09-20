#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ;i++){
			cin>>vec[i];
		}
		int ans = -1;
		for(int x = 0 ; x < 256 ; x++){
			int currXor = 0;
			for(int i = 0 ; i < n ; i++){
				currXor^=x;
				currXor^=vec[i];
			}
			if(currXor == 0){
				ans = x;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}