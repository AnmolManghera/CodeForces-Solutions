#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c,d;
		cin>>n>>c>>d;
		vector<long long>vec(n*n,0);

		for(int i = 0 ; i < n*n ; i++){
			cin>>vec[i];
		}
		
		vector<vector<long long>>mat(n,vector<long long>(n,0));

		sort(vec.begin(),vec.end());

		mat[0][0] = vec[0];

		vector<long long>toBeCompared;

		toBeCompared.push_back(mat[0][0]);

		for(int i = 1 ; i < n ; i++){
			mat[i][0] = mat[i-1][0] + c;
			mat[0][i] = mat[0][i-1] + d;
			toBeCompared.push_back(mat[i][0]);
			toBeCompared.push_back(mat[0][i]);
		}
		
		//going for rows while checking for validation in previous row
		for(int rowIdx = 1 ;  rowIdx < n ; rowIdx++){
			for(int colIdx = 1 ; colIdx < n ;colIdx++){
				mat[rowIdx][colIdx] = mat[rowIdx][colIdx-1] + d;
				toBeCompared.push_back(mat[rowIdx][colIdx]);
			}
		}


		sort(toBeCompared.begin(),toBeCompared.end());
		
		if(vec == toBeCompared) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}