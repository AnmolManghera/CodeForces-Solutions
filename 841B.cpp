#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;


int main(){
	int t;
	cin>>t;
	ll MOD = 1e9+7;

	while(t--){
		ll n;
		cin>>n;

		ll ans = (((((n*(n+1))%MOD)*((4*n) - 1))%MOD)*337)%MOD;

		cout<<ans<<endl;
	}
}