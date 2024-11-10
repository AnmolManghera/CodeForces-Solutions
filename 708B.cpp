#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

void func(vector<int>vec , int n, int m){
	unordered_map<int,int>ump;
	for(int i = 0 ; i < n ; i++){
		ump[vec[i]%m]++;
	}

	int ans = 0;
	if(ump[0]) ans++;

	for(int i = 1 ; i <= m/2 ; i++){
		int a = i, b = m - i;
		// if(a == b){}
		if(ump[a] || ump[b]){
			if(ump[a] != ump[b]){
				ans += ((ump[a] + ump[b]) - 2*min(ump[a],ump[b]) - 1);
			}
			ans++;
		}
	}

	cout<<ans<<endl;
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++) {
			cin>>vec[i];
		}
		func(vec,n,m);
	}
}