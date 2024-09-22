#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		//no of negatives has to be +ve
		//no of negatives has to be less than equal to positives
		int neg = 0,pos = 0;
		int n;
		cin>>n;
		for(int i = 0 ; i < n ;i++){
			int x;
			cin>>x;
			if(x < 0) neg++;
			else pos++;
		}
		if(pos == neg){
			if(neg%2 == 1){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else if(pos > neg){
			if(neg%2 == 1){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else{
			//here negatives are greater than positives
			int ans = 0;
			while(neg > 0 && pos < neg){
				ans++;
				neg--;
				pos++;
			}
			if((neg)%2 == 1){
				ans++;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}