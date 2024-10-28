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

		vector<int>vec(n,0);

		for(int i = 0 ;i < n ; i++){
			cin>>vec[i];
		}
		
		int i = 0 , j = n-1;


		int ele1 = -1, ele2 = -1;
		while(i < j){
			if(vec[i] == vec[j]){
				i++;
				j--;
			}
			else{
				ele1 = vec[i];
				ele2 = vec[j];
				break;
			}
		}

		//remove ele1 and see
		//remove ele2 and see
		vector<int>temp1,temp2;
		for(int i =0 ; i < n ; i++){
			if(vec[i] != ele1){
				temp1.push_back(vec[i]);
			}
			if(vec[i] != ele2){
				temp2.push_back(vec[i]);
			}
		}

		bool flag1 = true;

		i = 0, j = temp1.size() - 1;

		while(i < j){
			if(temp1[i] != temp1[j]){
				flag1 = false;
				break;
			}
			i++;
			j--;
		}

		bool flag2 = true;

		i = 0, j = temp2.size() - 1;

		while(i < j){
			if(temp2[i] != temp2[j]){
				flag2 = false;
				break;
			}
			i++;
			j--;
		}

		if(!flag1 && !flag2){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}