#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<vector<int>>mat(n,vector<int>(n,0));
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin>>mat[i][j];
			}
		}
		if(n%2 == 1){
			//look at the center row
			int cntRow = n/2;
			for(int i = 0 ; i < n/2 ; i++){
				if(mat[cntRow][i] != mat[cntRow][n-i-1]){ 
					k--;
				}
			}
		}
		for(int row = 0 ; row < n/2 ; row++){
			vector<int>top = mat[row];
			vector<int>bottom = mat[n - row - 1];
			reverse(bottom.begin(),bottom.end());
			for(int i = 0 ; i < n ; i++){
				if(bottom[i] != top[i]) k--;
				if(k < 0){
					break;
				}
			}
			if(k < 0){
				break;
			}
		}
		if(k >= 0){
			if(k % 2 == 0){
				cout<<"YES"<<endl;
			}
			else if(k%2 == 1 && n%2 == 1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}