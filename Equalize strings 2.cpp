/*
You are given two binary strings A and B and are required to make A equals to B. There are two types of operations:

Swap any two adjacent bits or characters in string . The cost of this operation is 1 unit.
Flip the bit or character of the string. The cost of this operation is 1 unit.
What is the minimum cost to make string A equal to B?
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;	
	string a, b;
	cin>>a>>b;
	int p=0,no=0;
	for	(int i=0;i<n;i++){
		if(a[i]==b[i])
			p=0;
		else{
			if(p==0){
				p=1;
				no++;
			} else {
				if(a[i]==a[i-1]){
					no++;
				}
				else p=0;
			}
			}
		}
	
	cout<<no;				

}
