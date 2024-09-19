#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr){
	bool ans = true;
	for(int i = 1 ; i < arr.size() ; i++){
		if(arr[i] < arr[i-1]) ans = false;
	}
	return ans;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		vector<vector<char>>target = {{1,1,1,1,1,1,1,1,1,1},
										{1,2,2,2,2,2,2,2,2,1},
										{1,2,3,3,3,3,3,3,2,1},
										{1,2,3,4,4,4,4,3,2,1},
										{1,2,3,4,5,5,4,3,2,1},
										{1,2,3,4,5,5,4,3,2,1},
										{1,2,3,4,4,4,4,3,2,1},
										{1,2,3,3,3,3,3,3,2,1},
										{1,2,2,2,2,2,2,2,2,1},
										{1,1,1,1,1,1,1,1,1,1}
									};
		int ans = 0;
		for(int i = 1 ; i <= 10 ; i++){
			for(int j = 1; j <= 10 ; j++){
				char ch;
				cin>>ch;
				if(ch == 'X') ans += target[i-1][j-1];

			}
		}
		cout<<ans<<endl;
	}

}
