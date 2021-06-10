/*You are given an array of length . You are required to count the number of  pairs where  such that 
the difference of the array elements on that indices is equal to the sum of the square of their indices.
Problem taken from the C++ Interview for Coding-Hackerearth.com*/*/


#include <iostream>

using namespace std;

int main() {
	long int num;
	cin >> num;										
	long int a[num];
	for(int i=1;i<=num;i++){
		cin>>a[i];
	}
	long int count=0, i, j;
	long long k, l;
	for(i=1;i<=num;i++){
		for(j=i+1;j<=num;j++)
		{
			l = a[j]-a[i];
			k = (i*i)+(j*j);
			if(l==k)
				count++;
		}
	}
	cout<<count;
	return 0;	
}
