#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r,b;
		cin>>n>>r>>b;

		int cntR = r/(b+1);

		int leftOver = r%(b+1);

		string rr = "";
		for(int i = 0 ; i < cntR ; i++){
			rr += "R";
		}

		string ans = "";
		while(b--){
			ans += rr;
			if(leftOver){
				ans += "R";
				leftOver--;
			}
			ans += "B";
		}
		ans += rr;
		cout<<ans<<endl;
	}
}