#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>strengths(n,0);
		int firstMax = -1, secondMax = -1;
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			strengths[i] = no;
			if(firstMax == -1){
				firstMax = no;
			}
			else if(secondMax == -1){
				if(no > firstMax){
					secondMax = firstMax;
					firstMax = no;
				}
				else{
					secondMax = no;
				}
				
			}
			else{
				if(no > firstMax){
					secondMax = firstMax;
					firstMax = no;
				}
				else if(no > secondMax){
					secondMax = no;
				}
			}
		}
		for(int i = 0 ; i < n ;i++){
			if(strengths[i] == firstMax){
				cout<<strengths[i] - secondMax<<" ";
			}
			else{
				cout<<strengths[i] - firstMax<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}