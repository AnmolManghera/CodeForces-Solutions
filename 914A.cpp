#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x,y;
		cin>>x>>y;
		set<pair<int,int>>pos1;
		pos1.insert({x-a,y+b});
		pos1.insert({x-b,y+a});
		pos1.insert({x-b,y-a});
		pos1.insert({x-a,y-b});
		pos1.insert({x+a,y-b});
		pos1.insert({x+b,y-a});
		pos1.insert({x+a,y+b});
		pos1.insert({x+b,y+a});
		cin>>x>>y;
		set<pair<int,int>>pos2;
		pos2.insert({x-a,y+b});
		pos2.insert({x-b,y+a});
		pos2.insert({x-b,y-a});
		pos2.insert({x-a,y-b});
		pos2.insert({x+a,y-b});
		pos2.insert({x+b,y-a});
		pos2.insert({x+a,y+b});
		pos2.insert({x+b,y+a});
		
		int ans = 0;
		for(auto it : pos1){
			if(pos2.find(it) != pos2.end()) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}