#include <bits/stdc++.h>
//ctrl + shift + d
//lower_bound -> first value equal or greater than the key
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,y;
		cin>>n>>x>>y;

		if(x == y){
			cout<<0<<endl;
			continue;
		}
			
		long long common = n/(lcm(x,y));
		long long mxSz = (n/x) - common;
		long long left = (n*(n+1))/2 - ((n-mxSz)*(n-mxSz+1))/2;
		long long mySz = (n/y) - common;
		long long right = (mySz*(mySz+1))/2;
		cout<<left-right<<endl;
	}
}