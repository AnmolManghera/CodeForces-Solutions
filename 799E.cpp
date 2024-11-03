#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;

		vector<int>vec(n,0);

		for(int i = 0 ; i < n ; i++){
			cin>>vec[i];
		}

		int head = 0, tail = 0, currSum = 0, l = -1, r = -1;

		for(head = 0 ; head < n ; head++){
			currSum += vec[head];

			while(currSum > s){
				currSum -= vec[tail];
				tail++;
			}

			if(currSum == s){
				if(head - tail >= r - l){
					r = head;
					l = tail;
				}
			}
		}

		if(l == -1){
			cout<<-1<<endl;
		}
		else{
			cout<<(n - r + l - 1)<<endl;
		}
	}
}