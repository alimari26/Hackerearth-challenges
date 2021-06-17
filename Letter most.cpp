/* Problem
Lonely Y loves his string s of lowercase letters, Y is about to escape so he should choose just one lowercase letter c and carry all letters in s which is equal to c with himself.

What is the maximum number of letters Y can carry with himself?

Input

First line contains only n , legnth of string s .

Second line contains string s of lowercase letters.

Problem taken from Hackerearth - Interview prepping questions -Easy


*/
#include <iostream>

using namespace std;

int main() {
	int n, s[27];
	string st;
	cin >> n>>st;
	for(int i=0; i<27;i++)
		s[i]=0;
	while(n>-1){
		s[st[n]-'a']++;
		n--;
	}									
	int max=0;
	for(int i=0; i<=26;i++)
		if(s[i]>max)
			max=s[i];
	cout<<max;
	return 0;	
}

