#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>noOfTwos(n+1,0);
		noOfTwos[0] = 0;
		for(int i = 1 ; i <= n ;i++){
			int no;
			cin>>no;
			if(no == 2){
				noOfTwos[i] = noOfTwos[i-1]+1;
			}
			else{
				noOfTwos[i] = noOfTwos[i-1];
			}
		}
		int ans = -1;
		for(int k = 1 ; k <= n-1 ; k++){
			if(noOfTwos[k] == noOfTwos[n] - noOfTwos[k]){
				ans = k;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
