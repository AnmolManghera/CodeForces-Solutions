#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

void generateStrings(string curr, int idx, string str, vector<string>&store){
	if(idx == curr.length()) return;
	if(store.size()) return;
	for(char ch = 'a' ; ch <= 'z' ; ch++){
		curr[idx] = ch;

		int res = str.find(curr);
    	if (res == string::npos){
          	store.push_back(curr);
    	}

    	if(store.size()) return;
		generateStrings(curr, idx + 1, str, store);
	}
}

void func(string str,int n){
	string temp = "";
	vector<string>store;
	for(int len = 1 ; len <= n ; len++){
		if(store.size()) break;
		temp += "a";
		generateStrings(temp, 0 , str, store);
	}
	sort(store.begin(),store.end());
	cout<<store[0]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		func(str,n);
	}
}