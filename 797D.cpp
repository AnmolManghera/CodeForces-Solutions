#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		string str;
		cin>>str;

		int tail = 0;

		int currB = 0 , currW = 0;

		int ans = n;

		for(int head = 0 ; head < n ; head++){

			if(str[head] == 'B') currB++;
			else currW++;

			while(head - tail + 1 > k){
				if(str[tail] == 'B') currB--;
				else currW--;
				tail++;
			}

			if(head - tail + 1 == k){
				ans = min(ans,currW);
			}
		}
		cout<<ans<<"\n";
	}

}