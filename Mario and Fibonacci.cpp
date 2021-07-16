/*
Suresh is a fan of Mario. But being a programmer he decided to modify the game. In one module he needs your help. He modified the game as follows:
There are N stones on the way indexed from 1 to N. Every stone having index i is associated with points equal to ith fibonacci number. That is if there are 5 stones then the points associated with them are 1,1,2,3,5 resp.
Mario gets the point when he steps on the stone. But during the gameplay he steps on M stones and skips some. So you have to find the sum of points Mario missed.

Input fomat:
First line contains 2 space separated integers containing N and M.
Next line contains M space separated integers denoting the points that he obtained.

Output format:
Print the sum of points Mario missed.
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <iostream>

using namespace std;

int main() {
	long long int n,m;
	cin>>n>>m;
	long long int sum=0;
	long long int a=1, b=1,c;
	if(n==1)
		sum =1;
	else sum =2;
	for(int i=3;i<=n;i++){
		c=b;
		b=a+b;
		a=c;
		sum +=b;
	}
	while(m--){
		cin>>c;
		sum -=c;
	}
	cout<<sum;
}
