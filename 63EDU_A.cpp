#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	// int t;
	// cin>>t;
	// while(t--){
		int n;
		cin>>n;
		
		string str;
		cin>>str;

		vector<int>smallToRight(n+1,-1);

		char ch = str[n-1];
		int smallIdx = n-1;

		int i;

		for(i = n-2 ; i >= 0 ; i--){
			if(str[i] > ch){
				break;
			}
			else{
				ch = str[i];
				smallIdx = i;
			}
		}

		if(i == -1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<(i+1)<<" "<<(smallIdx + 1)<<endl;
		}
	// }
}