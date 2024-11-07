#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	long long n,q;
	cin>>n>>q;
	vector<int>vec(n+1,0);

	long long setSum = 0;
	for(int i = 1 ; i <= n ; i++){
		int no;
		cin>>no;
		vec[i] = no;
		setSum += no;
	}
	long long lastAll = 0;
	vector<int>isUpdated(n+1,1);
	int currUpdated = 1, currMax = 1;
	while(q--){
		int type;
		cin>>type;

		if(type == 1){
			int idx, no;
			cin>>idx>>no;

			if(currUpdated == -1){
				//new series is starting
				currUpdated = currMax + 1;
				isUpdated[idx] = currUpdated;
				currMax = currUpdated;
				vec[idx] = no;
				setSum -= lastAll;
				setSum += vec[idx];
			}
			else if(isUpdated[idx] >= currUpdated){
				isUpdated[idx]++;
				currMax = max(isUpdated[idx],currMax);
				setSum -= vec[idx];
				vec[idx] = no;
				setSum += vec[idx];
			}
			else{
				setSum -= lastAll;
				vec[idx] = no;
				setSum += vec[idx];
				isUpdated[idx] = currMax;
			}
		}	
		else{
			long long no;
			cin>>no;

			currUpdated = -1;
			lastAll = no;

			setSum = lastAll*n;
		}
		cout<<setSum<<endl;
	}

}