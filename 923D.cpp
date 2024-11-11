#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

void func(vector<int>vec , int n){
	vector<int>streakRTL(n,0),streakLTR(n,0);

	streakRTL[n-1] = 1;
	for(int i = n - 2 ; i >= 0 ; i--){
		if(vec[i+1] == vec[i]){
			streakRTL[i] = streakRTL[i+1] + 1;
		}
		else{
			streakRTL[i] = 1;
		}
	}

	streakLTR[0] = 1;
	for(int i = 1 ; i < n ; i++){
		if(vec[i-1] == vec[i]){
			streakLTR[i] = streakLTR[i-1] + 1;
		}
		else{
			streakLTR[i] = 1;
		}
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;

		l--;
		r--;

		if(vec[l] != vec[r]){
			cout<<l+1<<" "<<r+1<<endl;
		}
		else if(vec[l] == vec[r]){
			//case 1 
			// consider element on right and next of left
			if(l + streakRTL[l] < r){
				cout<<l+streakRTL[l]+1<<" "<<r+1<<endl;
			}
			else if(r - streakLTR[r] > l){
				cout<<l+streakLTR[l]+1<<" "<<r+1<<endl;
			}
			else{
				cout<<-1<<" "<<-1<<endl;
			}
		}
	}
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++) {
			cin>>vec[i];
		}
		func(vec,n);
	}
}