#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long x;
		cin>>x;
		long long minBeauty = 0;
		long long minResidue = 0;
		long long maxBeauty = 0;
		for(int i = 0 ; i < n ; i++){
			long long no;
			cin>>no;
			if(no%x == 0){
				minBeauty += (no/x);
				maxBeauty += (no/x);
			}
			else{
				minResidue += no;
				maxBeauty += ((no/x) + 1);
			}

			
		}
		if(minResidue% x == 0){
			minBeauty += (minResidue/x);
		}
		else{
			minBeauty += (minResidue/x) + 1;
		}
		cout<<minBeauty<<" "<<maxBeauty<<endl;
	}
	return 0;
}