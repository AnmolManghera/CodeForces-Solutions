#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ones = 0;
		long long n = s.length();
		long long maxStreak = 0;
		long long currStreak = 0;
		for(int i = 0 ; i < n; i++){
			if(s[i] == '1'){ 
				ones++;
				currStreak++;
				maxStreak = max(currStreak,maxStreak);
			}
			else{
				currStreak = 0;
			}
		}
		long long i = 0, j = n-1;
		while(i<n && s[i] == '1'){
			i++;
		}
		while(j > i && s[j] == '1'){
			j--;
		}
		maxStreak = max(maxStreak, i + n - j - 1);
		if(ones == n){
			cout<<n*n<<endl;
		}
		else if(ones == 0){
			cout<<0<<endl;
		}
		else{
			long long ans = maxStreak;
			maxStreak -= 1;
			long long multiplier = 2;
			while(maxStreak != 0){
				ans = max(ans,maxStreak*multiplier);
				maxStreak -= 1;
				multiplier++;
			}
			cout<<ans<<endl;
		}
	}
}