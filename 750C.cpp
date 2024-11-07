#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
			
		string str;
		cin>>str;

		int i = 0, j = n-1;
		while(i <= j && str[i] == str[j]){
			i++;
			j--;
		}

		if(i >= j){
			cout<<0<<endl;
			continue;
		}
		// we have to erase either str[i] or str[j]

		// lets remove str[i];

		int ans1 = -1, ans2 = -1;
		int tempAns1 = 1, tempAns2 = 1;

		int l = i + 1, r = j;
		while(l <= r){
			if(str[l] == str[r]){
				l++;
				r--;
			}
			else if(str[l] == str[i]){
				tempAns1++;
				l++;
			}
			else if(str[r] == str[i]){
				tempAns1++;
				r--;
			}
			else{
				break;
			}
		}

		if(l >= r){
			ans1 = tempAns1;
		}

		// lets remove str[j]


		int a = i, b = j-1;
		while(a <= b){
			if(str[a] == str[b]){
				a++;
				b--;
			}
			else if(str[a] == str[j]){
				tempAns2++;
				a++;
			}
			else if(str[b] == str[j]){
				tempAns2++;
				b--;
			}
			else{
				break;
			}
		}

		if(a >= b){
			ans2 = tempAns2;
		}

		if(ans1 == -1 && ans2 == -1){
			cout<<-1<<endl;
		}
		else if(ans1 != -1 && ans2 != -1){
			cout<<min(ans1,ans2)<<endl;
		}
		else if(ans1 == -1){
			cout<<ans2<<endl;
		}
		else{
			cout<<ans1<<endl;
		}
	}
}