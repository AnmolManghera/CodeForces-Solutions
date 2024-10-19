#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long w,h;
		cin>>w>>h;
		int k;
		cin>>k;
		vector<long long>baseHorLine(k,0);
		for(int i = 0 ; i < k ; i++){
			cin>>baseHorLine[i];
		}
		// baseHorLine[0] = 0;
		// baseHorLine[k+1] = w;
		sort(baseHorLine.begin(),baseHorLine.end());

		cin>>k;
		vector<long long>otherHorLine(k,0);
		for(int i = 0 ; i < k ; i++){
			cin>>otherHorLine[i];
		}
		// otherHorLine[0] = 0;
		// otherHorLine[k+1] = w;
		sort(otherHorLine.begin(),otherHorLine.end());
		

		cin>>k;
		vector<long long>baseVerLine(k,0);
		for(int i = 0 ; i < k ; i++){
			cin>>baseVerLine[i];
		}
		// baseVerLine[0] = 0;
		// baseVerLine[k+1] = h;
		sort(baseVerLine.begin(),baseVerLine.end());
		

		cin>>k;
		vector<long long>otherVerLine(k,0);
		for(int i = 0 ; i < k ; i++){
			cin>>otherVerLine[i];
		}
		// otherVerLine[0] = 0;
		// otherVerLine[k+1] = h;
		sort(otherVerLine.begin(),otherVerLine.end());
		

		long long val1 = (baseHorLine.back() - baseHorLine.front())*h;
		long long val2 = (otherHorLine.back() - otherHorLine.front())*h;
		long long val3 = (baseVerLine.back()  - baseVerLine.front())*w;
		long long val4 = (otherVerLine.back() - otherVerLine.front())*w;

		cout<<max(max(max(val1,val2),val3),val4)<<endl;
	}
}