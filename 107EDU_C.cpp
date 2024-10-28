#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;


int main(){
	// int t;
	// cin>>t;
	// while(t--){
		int n,q;
		cin>>n>>q;

		vector<int>top(51,-1);

		for(int i = 1 ;i <= n ; i++){
			int no;
			cin>>no;
			if(top[no] == -1){
				top[no] = i;
			}
		}


		while(q--){
			int qr;
			cin>>qr;
			cout<<top[qr]<<" ";

			int edge = top[qr];
			for(int i = 1 ; i <= 50 ; i++){
				if(top[i] != -1 && top[i] < edge){
					top[i] += 1;
				}
			}
			top[qr] = 1;
		}

		cout<<endl;

	// }
}