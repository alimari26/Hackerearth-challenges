/*You are given two binary strings A and B of the same length N. Your task is to make both the strings equal. Perform the following operation on string :

Select any substring of A then flip all 1's to 0 and flip all 0's to 1 of that substring.

Print the minimum number of operations you have to perform to make them equal.
Problem taken from Hackerearth - Interview prepping questions 
/*
#include <iostream>

using namespace std;

int main() {
	int n;//length of the strings
	cin >> n;									
	int p=0;
	int no=0;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<n;i++){
		if(a[i]==b[i])
			p=0;
		else{
			if(p==0)
				no++;
			p=1;
		}
	}
	cout<<no;

}

