#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		for(int i = 0 ; i < n ; i++){
			cin>>x;
		}
		if(n%2 == 0){
			cout<<2<<endl;
			cout<<1<<" "<<n<<endl;
			cout<<1<<" "<<n<<endl;
		}
		else{
			cout<<5<<endl;
			cout<<1<<" "<<2<<endl;
			cout<<1<<" "<<2<<endl;
			cout<<2<<" "<<n<<endl;
			cout<<2<<" "<<n<<endl;
			cout<<1<<" "<<n<<endl;
		}
	}
	return 0;
}