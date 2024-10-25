#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
using ll = long long;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		string str;
		cin>>str;


		stack<int>st;
		if(str[0] == '_' || str[0] == '('){
			str[0] = '(';
			st.push(0);
		}

		int ans = 0;

		for(int i = 1 ; i < n ; i++){
			if(str[i] == ')'){
				ans += (i - st.top());
				st.pop();
			}
			else if(str[i] == '('){
				st.push(i);
			}
			else{
				if(str[i-1] == '('){
					str[i] = ')';
					ans += 1;
					st.pop();
				}
				else{
					str[i] = '(';
					st.push(i);
				}
			}
		}


		// cout<<str<<endl;
		cout<<ans<<endl;
	}
}