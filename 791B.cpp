#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	// int t;
	// cin>>t;
	// while(t--){
		
	// }
	int n,q;
	cin>>n>>q;
	unordered_map<int,int>ump;

	long long setSum = 0;
	for(int i = 1 ; i <= n ; i++){
		int no;
		cin>>no;
		ump[i] = no;
		setSum += no;
	}
	int lastAll = 0;
	while(q--){
		int type;
		cin>>type;

		if(type == 1){
			int idx, no;
			cin>>idx>>no;

			if(ump.find(idx) != ump.end()){
				setSum -= ump[idx];
			}
			ump[idx] = no;
			setSum += ump[idx];
		}	
		else{
			int no;
			cin>>no;
			ump.clear();
			lastAll = no;
			setSum = 0;
		}

		cout<<(lastAll*(n - ump.size()) + setSum)<<endl;
	}

}