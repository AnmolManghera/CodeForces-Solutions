#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		// string n,k;
		// cin>>n>>k;
		// cout<<n<<" "<<k<<endl;
		long long n,k;
		cin>>n>>k;
		if(n%2 == 0){
			cout<<"YES"<<endl;
		}
		//here n is negative
		else if(k%2 == 1 ){
			if(n-k >= 0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}