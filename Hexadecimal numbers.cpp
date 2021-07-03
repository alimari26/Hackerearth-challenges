/*
You are given a range [L,R] . You are required to find the number of integers X in the range such that GCD(X,F(X))>1 where F(X) is equal to the sum of digits of X in its hexadecimal (or base 16) representation.
For example,F(27)=1+B=1+11=12  (27 in hexadecimal is written as 1B). You are aksed T such questions. 
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <iostream>

using namespace std;
int a[100001][2];
long long int F(long long int x){
	//to go from decimal to hexa, divide x by 16, until c<16 and rgoes in the back of the number, in the end is final c next to the r's 
	long long int y=x;
	long long int sum=0;
	while(x>=16){
		sum+=x%16;
		x=x/16;
	}
	sum+=x;
	a[y][0]=sum;
	return sum;
}
long long int gcd(long long int a, long long int b){
	if(a==0 || b==0)
		return b + a;

	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

int main() {
	ios_base::sync_with_stdio(false);
	ios::sync_with_stdio(0);
    cin.tie(NULL);
	cout.tie(NULL);
	long long int T;
	cin >> T;										
	long long int L, R,i,calc;
	while(T--){
		cin>>L>>R;
		calc=0;
		for(i=L; i<=R;i++){
			if(a[i][0]==0){
				a[i][1]=gcd(i,F(i));}
			if(a[i][1]>1)
				calc++;

		}
		cout<<calc<<endl;
	}
}
