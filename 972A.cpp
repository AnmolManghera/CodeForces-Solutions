#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		string all = "aeiou";

		int leftOver = n%5;

		int total = n/5;

		string ans = "";

		int idx = 0;
		
		for(int i = 0 ; i < total ; i++){
			ans += "a";
		}
		if(leftOver > 0){
			ans += "a";
			leftOver--;
		}
		for(int i = 0 ; i < total ; i++){
			ans += "e";
		}
		if(leftOver > 0){
			ans += "e";
			leftOver--;
		}
		for(int i = 0 ; i < total ; i++){
			ans += "i";
		}
		if(leftOver > 0){
			ans += "i";
			leftOver--;
		}
		for(int i = 0 ; i < total ; i++){
			ans += "o";
		}
		if(leftOver > 0){
			ans += "o";
			leftOver--;
		}
		for(int i = 0 ; i < total ; i++){
			ans += "u";
		}
		if(leftOver > 0){
			ans += "u";
			leftOver--;
		}

		cout<<ans<<endl;
	}
}