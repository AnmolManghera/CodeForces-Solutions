#include <iostream>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		map<int,int>ump;
		int maxFreq = 0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin>>x;
			ump[x]++;
			maxFreq = max(maxFreq,ump[x]);
		}
	
		int currFreq = maxFreq;

		int operations = 0;

		while(currFreq < n){
			int elementReq = min(n - currFreq , currFreq);
			operations += (1 + elementReq);
			currFreq += elementReq;
		}

		cout<<operations<<'\n';
	}
	return 0;
}