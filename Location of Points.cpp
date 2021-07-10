/*
You are given the coordinates of N points in 2-D plane. You need to tell that how many points lie on the left of the y-axis and number of points that lie on the right of the y-axis.
Problem taken from Hackerearth - Interview prepping questions */
#include <iostream>

using namespace std;

int main() {
	long long int n, a, b, l, r;
	cin>>n;
	l=0;
	r=0;
	while(n--){
		cin>>a>>b;
		if (a<0)
			l++;
		if(a>0)
			r++;
	}
	cout<<l<<" "<<r;
}
