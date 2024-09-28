#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}
		if(vec[0] == 1) vec[0] = 2;
		for(int i = 1 ; i < n ; i++){
			if(vec[i] == 1){
				if(vec[i-1] == 2){
					vec[i] = 3;
				}
				else{
					vec[i] = 2;
				}
			}
			else if(vec[i]%vec[i-1] != 0){
				continue;
			}
			else{
				vec[i]++;
			}
		}
		for(int i = 0 ;i < n ; i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}