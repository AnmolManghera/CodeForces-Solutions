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
		vector<pair<int,int>>vec;
		
		for(int i = 0 ; i < n ; i++){
			int no;
			cin>>no;
			vec.push_back({no,i});
		}

		sort(vec.begin(),vec.end());


		bool flag = true;
		
		int i = 0;
		while(i < n){
			int j = i;
			while(j < n-1 && (vec[j+1].first == vec[i].first)){
				j++;
			}
			if(j == i){
				flag = false;
				break;
			}
			reverse(vec.begin()+i,vec.begin()+j+1);
			if((j - i) % 2 == 0){
				swap(vec[i],vec[(i+j)/2]);
			}
			i = j + 1;
		}
		
		if(!flag){
			cout<<-1<<endl;
			continue;
		}
		for(int i = 0 ; i < n ; i++){
			cout<<vec[i].second+1<<" ";
		}
		cout<<"\n";
	}

}