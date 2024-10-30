#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,k;
		cin>>x>>y>>k;

		long long currSticks = 1;

		long long ans = 0;

		long long sticksReqForCoals = y*k;


		long long ans1 = (sticksReqForCoals/(x-1));
		
		currSticks += (ans1*(x-1));

		currSticks -= sticksReqForCoals;

		long long ans2 = (k - currSticks)/(x-1);
		if((k-currSticks)%(x-1) != 0){
			ans2++;
		}
		cout<<ans1+ans2+k<<endl;
	}
}