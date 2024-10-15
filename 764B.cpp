#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;

		if(a > c){
			int temp = a;
			a = c;
			c = temp;
		}

		//now it is always an increasing AP

		bool flag = false;

		// A and B are in AP
		// if(b - a >= 0){
			if(a > b){
				// a has to be bigger than c
				int cd = a - b;
				int reqC = b - cd;
				if(reqC >= c && reqC % c == 0) flag = true;
			}
			else{
				int cd = b - a;
				int reqC = b + cd;
				if(reqC >= c && reqC % c == 0) flag = true;
			}
		// }

		//B and C are in AP
		// if(c - b >= 0){
			if(b > c){
				// a has to be bigger than c
				int cd = b - c;
				int reqA = b + cd;
				if(reqA >= a && reqA % a == 0) flag = true;
			}
			else{
				int cd = c - b;
				int reqA = b - cd;
				if(reqA >= a && reqA % a == 0) flag = true;
			}
		// }

		//A and C are in AP
		// if(c - a >= 0){

			if(c > a && (c-a)%2 == 0){
				int cd = (c - a)/2;
				int reqB = a + cd;
				if(reqB >= b && reqB % b == 0) flag = true;
			}
			else if((a-c)%2 == 0){
				int cd = (a - c)/2;
				int reqB = a - cd;
				if(reqB >= b && reqB % b == 0) flag = true;
			}
			
		// }

		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
}