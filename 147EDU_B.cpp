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

		vector<int>a(n+1,0), b(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			cin>>a[i];
		}
		for(int i = 1 ; i <= n ; i++){
			cin>>b[i];
		}

		int i = 1,j = n;

		for(i = 1 ; i <= n ; i++){
			if(a[i] != b[i]) break;
		}
		for(j = n ; j >= 1 ; j--){
			if(a[j] != b[j]) break;
		}
		
		// cout<<"initial "<<i<<" "<<j<<endl;
		// now we have the least sized subarray that is possible
		int minEle = n+1, maxELe = 0;
		for(int k = i ; k <= j ; k++){
			minEle = min(minEle,b[k]);
			maxELe = max(maxELe,b[k]);
		}


		while(i > 1 && b[i-1] == a[i-1] && b[i-1] <= minEle && b[i-1] <= b[i]){
			i--;
		}

		while(j < n && b[j+1] == a[j+1] && b[j+1] >= maxELe && b[j+1] >= b[j]){
			j++;
		}

		cout<<i<<" "<<j<<endl;

	}
}