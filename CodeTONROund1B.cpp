#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;

		vector<long long>vec(n,0);
		for(int i = 0 ; i < n ;i++){
			cin>>vec[i];
		}


		sort(vec.begin(),vec.end());

		bool flag = false;
		for(int i = 0 ; i < n ; i++){
			if(binary_search(vec.begin(),vec.end(),vec[i]+k) || binary_search(vec.begin(),vec.end(),vec[i]-k)) {
				flag = true;
				break;
			}			
		}

		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}