#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int>vec(26,0);
		for(int i = 0 ;i < n ; i++){
			vec[s[i]-'a']++;
		}
		vector<int>odds;
		vector<int>evens;
		for(int i = 0 ; i < 26 ; i++){
			if(vec[i]%2 == 1){
				odds.push_back(vec[i]);
			}
			else{
				evens.push_back(vec[i]);
			}
		}
		bool flag = true;

		sort(odds.begin(),odds.end());
		//at the end, we can have atmost 1 char with odd frequency
		//first trying to make all odds except 1 element
		if(odds.size() > 0){
			if(k%2 == 1 && odds.size() == 0) flag = false;
			int i;
			for(i = 1 ; i < odds.size() ; i++){
				if(k == 0) break;
				k--;
				odds[i]--;
			}
			//cases
			//we have 1 odd element left rn;
			if(i != odds.size()) flag = false;
			else if(i == n && k != 0){
				int totalAvailable = accumulate(odds.begin(),odds.end(),0) + accumulate(evens.begin(),evens.end(),0) - 1;
				if(k%2 == 0){
					if(k > totalAvailable) flag = false;
				}
				else{
					if(totalAvailable + 1 < k) flag = false;
				}
			}
		}


		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}