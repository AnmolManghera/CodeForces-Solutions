#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

void func(string str,int n){
	int zeros = 0, ones = 0;
	for(int i = 0 ; i < n ; i++){
		if(str[i] == '0') zeros++;
		else ones++;
	}

	if(ones == n){
		cout<<"DRAW"<<endl;
		return;
	}
	else if(n%2 == 0){
		cout<<"BOB"<<endl;
	}
	else if(n%2){
		if(str[n/2] == '0' && zeros == 1){
			cout<<"BOB"<<endl;
		}
		else if(str[n/2] == '1' && zeros > 1){
			cout<<"BOB"<<endl;
		}
		else if(str[n/2] == '0' && zeros > 1){
			cout<<"ALICE"<<endl;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		func(str,n);
	}
}