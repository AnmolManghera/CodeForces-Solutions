#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<int>vec(n+1,0);

		for(int i = 1 ; i <= n ; i++){
			cin>>vec[i];
		}

		int edge = n-1;

		for(edge = n-1 ; edge >= 1 ; edge--){
			if(vec[edge] > vec[edge+1]){
				break;
			}
		}

		if(edge == n-1){
			cout<<-1<<endl;
			continue;
		}
		if(edge == 0){
			cout<<0<<endl;
			continue;
		}

		// if we reach here, it means vec[n-1] <= vec[n]

		if(vec[n-1] - vec[n] > vec[n-1]){
			cout<<-1<<endl;
			continue;
		}

		cout<<(n-2)<<endl;
		for(int i = n-2 ; i >= 1 ; i--){
			cout<<i<<" "<<(n-1)<<" "<<n<<endl;
		}


	}

}