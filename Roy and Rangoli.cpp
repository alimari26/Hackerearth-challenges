/* Its Diwali time and little Roy thought of an interesting design for Rangoli. He created an N x N grid. Roy fills some of the cells of grid with red color.

Cell located at ith row and jth column is colored if i+j is prime. Consider Zero-based numbering of grid. (See Sample Test Case Explanation for clarification)

Roy wants to know how many cells he will have to color given the size of grid N.
Problem taken from Hackerearth - Interview prepping questions -Medium */

#include <iostream>

using namespace std;

bool isprime(long int a){
	if(a==2)
		return true;
	else if (a==1 || a==0)
		return false;
		else {
			for(long int i =2;i<a;i++){
				if(a%i == 0)
					return false;
			}
			return true;
		}
}

int main() {
	long int n;
	cin >> n;
	int count=0;
	long int i,j;										
	for(i =0;i<n;i++)
		for(j=i; j<n;j++)
			if(isprime(i+j)){
				count ++;
					if (i !=j){
					count ++;
				}

			}
	cout<<count;
	return 0;
}


