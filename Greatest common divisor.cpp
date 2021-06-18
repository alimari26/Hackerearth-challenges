/*
You are given array A. There are 4 types of operations associated with it:

1 l r x, for each i ∈ [l, r] replace ai with the value of x.
2 l r x, for each i ∈ [l, r] replace ai with the value of the gcd(ai, x) function.
3 l r, print the value of max ai, l ≤ i ≤ r.
4 l r, print the value of al + al+1 + ... + ar.
A greatest common divisor (gcd(a, b)) of two positive integers a and b is equal to the biggest integer d such that both integers a and b are divisible by d.

Problem taken from Hackerearth - Interview prepping questions -Medium 
*/
#include <iostream>

using namespace std;

 int a[100000];

void TYPE1(int l, int r){
int x;
cin>>x;
for(int i =l;i<=r;i++)
	a[i]=x;

}
int gcd(int a, int b){
	if(a==0 || b==0)
		return b + a;

	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}
void TYPE2(int l, int r){
int x;
cin>>x;
for(int i =l;i<=r;i++)
	a[i]=gcd(a[i],x);

}
void TYPE3(int l, int r){
	int max = a[l];
for(int i =l+1;i<=r;i++){
	if (a[i]>=max)
		max = a[i];
}	
cout<<max<<endl;
}
void TYPE4(int l, int r){
	int sum = a[l];
for(int i =l+1;i<=r;i++){
	sum += a[i];
}	
cout<<sum<<endl;
}
int main() {
	int n,m, type, l, r, x;
	cin >> n>>m;									
	int i;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=m;i++){
		cin>>type>>l>>r;
		if(type == 1)
			TYPE1(l,r);
		if(type == 2)
			TYPE2(l,r);
		if(type == 3)
			TYPE3(l,r);
		if(type == 4)
			TYPE4(l,r);
	}
	return 0;	
}

