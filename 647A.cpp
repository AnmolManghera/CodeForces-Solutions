#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		
		//we assume a > b
		if(b > a){
			long long temp = b;
			b = a;
			a = temp;
		}

		// go from a to b;
		if(a==b){
			cout<<0<<endl;
		}
		else if(a%b != 0){
			cout<<-1<<endl;
		}
		else if(a%b == 0){
			// we need to check if a/b is a power of 2
			long long n = a/b;
			if(n & (n-1)){
				cout<<-1<<endl;
			}
			else{
				long long rem = a/b;
				//this is a factor of two
				// cout<<rem<<endl;
				int ans = 0;

				while(rem % 8 == 0){
					ans++;
					rem /= 8;
				}

				while(rem % 4 == 0){
					ans++;
					rem /= 4;
				}

				while(rem % 2 == 0){
					ans++;
					rem /= 2;
				}

				cout<<ans<<endl;
			}
		}
	}
}