#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x;
		cin>>n>>k>>x;
		//can't use x;
		//x is less than equal to k
		if(x == 1){
			if(k == 1){
				cout<<"NO"<<endl;
			}
			else if(k == 2 && n%2 == 1){
				cout<<"NO"<<endl;
			}
			else if(k == 2 && n%2 == 0){
				cout<<"YES"<<endl;
				cout<<n/2<<endl;
				while(n > 1){
					cout<<2<<" ";
					n = n/2;
				}
				cout<<endl;
			}
			else{
				if(n%2){
					cout<<"YES"<<endl;
					cout<<1 + (n-3)/2<<endl;
					cout<<3<<" ";
					n -= 3;
					while(n > 1){
						cout<<2<<" ";
						n = n/2;
					}
					cout<<endl;
				}
				else{
					cout<<"YES"<<endl;
					cout<<n/2<<endl;
					while(n > 1){
						cout<<2<<" ";
						n = n/2;
					}
					cout<<endl;
				}
			}
		}
		else{
			cout<<"YES"<<endl;
			cout<<n<<endl;
			while(n--){
				cout<<1<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}