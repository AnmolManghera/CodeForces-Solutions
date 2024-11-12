#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

void func(vector<int>vec , int n){
	vector<int>msb(n,0);
	for(int i = 0 ; i < n ; i++){
		int no = vec[i];
		int k = 0;
		while(no >> 1){
			no >>= 1;
			k++;
		}
		msb[i] = k;
	}
	long long ans = 0;
	unordered_map<int,long long>ump;
	ump[msb[n-1]]++;
	for(int i = n-2 ; i >= 0 ;i--){
		ans += ump[msb[i]];
		ump[msb[i]]++;
	}
	cout<<ans<<endl;

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