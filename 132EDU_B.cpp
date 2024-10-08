#include <bits/stdc++.h>
using namespace std;

int main(){
		int n,q;
		cin>>n>>q;
		vector<long long>vec(n+1,-1);
		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
		}
		vector<long long>forward(n+1,0);
		for(int i = 2; i <= n ; i++){
			if(vec[i] < vec[i-1]){
				forward[i] = forward[i-1] + (vec[i-1] - vec[i]);
			}
			else{
				forward[i] = forward[i-1];
			}
		}
		vector<long long>backward(n+1,0);
		for(int i = n-1 ; i>= 1; i--){
			if(vec[i+1] > vec[i]){
				backward[i] = backward[i+1] + (vec[i+1] - vec[i]);
			}
			else{
				backward[i] = backward[i+1];
			}
		}
		while(q--){
			int s,e;
			cin>>s>>e;
			if(e >= s){
				cout<<forward[e] - forward[s]<<endl;
			}
			else{
				cout<<backward[e] - backward[s]<<endl;
			}
		}
	
	return 0;
}