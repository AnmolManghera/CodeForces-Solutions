#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int>vec(n,0);

		for(int i = 0 ;i < n ; i++){
			cin>>vec[i];
		}

		int i = n-1;

		while(i>0 && vec[i] == vec[n-1]){
			i--;
		}


		int canChange = n - i - 1, ans = 0;
		while(i >= 0){
			while(i >= 0 && vec[i] == vec[n-1]){
				i--;
				canChange++;
			}
			if(i < 0){
				break;
			}
			ans++;
			i -= (canChange);
			canChange*=2;
		}

		cout<<ans<<endl;
	}
}