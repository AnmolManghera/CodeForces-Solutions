#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
void func(vector<int>&vec, int n){
	int maxi = n, mini = 1;
	int i = 0, j = n-1;
	while(i<j){
		if(vec[i] != maxi && vec[i] != mini && vec[j] != maxi && vec[j] != mini){
			cout<<(i+1)<<" "<<(j+1)<<endl;
			return;
		}
		else if(vec[i] == mini){
			i++;
			mini++;
		}
		else if(vec[j] == mini){
			j--;
			mini++;
		}
		else if(vec[i] == maxi){
			i++;
			maxi--;
		}
		else if(vec[j] == maxi){
			j--;
			maxi--;
		}
	}
	cout<<-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>vec(n,0);
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			vec[i] = no;
		}
		func(vec,n);
	}
}