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

		int x = log2(n);

		int number = pow(2,x);

		if(number == n){
			// split will be at n/2
			for(int i = 1; i < number/2 ; i++){
				cout<<i<<" ";
			}
			cout<<0<<" ";
			for(int i = number/2 ; i < n ; i++){
				cout<<i<<" ";
			}
		}
		else{
			for(int i = 1; i < number ; i++){
				cout<<i<<" ";
			}
			cout<<0<<" ";
			for(int i = number ; i < n ; i++){
				cout<<i<<" ";
			}
		}
		
		cout<<endl;
	}
}