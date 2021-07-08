/*
You currently have N toffees with you. There's also a limited edition offer going on right now. The offer says that for every X toffee wrappers you'll get one toffee. You want to eat as many toffees as you can before the offer expires. Find the maximum number of toffees you can eat.
Problem taken from Hackerearth - Interview prepping questions 
*/

#include <iostream>

using namespace std;

int main() {
	long long int n,x;
	cin>>n>>x;
	long long int sum=n;
	while(n>=x){
		sum ++;
		n=n-x+1;
	}
	
	cout<<sum;
}
