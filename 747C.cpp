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
		char ch;
		cin>>ch;

		string s;
		cin>>s;

		string str = "#";
		str += s;

		bool flag = true;
		for(int i = 1 ; i <= n ; i++ ){
			if(str[i] != ch){
				flag = false;
				break;
			}
		}

		if(flag){
			cout<<0<<endl;
			continue;
		}
		if(str[n] != ch && str[n-1] != ch){
			bool done = false;
			for(int i = n ; i > n/2 ; i--){
				if(str[i] == ch){
					cout<<1<<endl;
					cout<<i<<endl;
					done = true;
					break;
				}
			}
			if(!done){
				cout<<2<<endl;
				cout<<(n-1)<<" "<<n<<endl;
			}
		}
		else if(str[n] != ch){
			cout<<1<<endl;
			cout<<(n-1)<<endl;
		}
		else if(str[n-1] != ch){
			cout<<1<<endl;
			cout<<n<<endl;
		}
		else{
			cout<<1<<endl;
			cout<<(n-1)<<endl;
		}
	}

}