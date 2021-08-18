/*
You are given an array. What will return how many swaps are done is the Bubble Sort.
Problem taken from Hackerearth - Interview prepping questions -Easy
*/
#include <iostream>

using namespace std;

int a[5000];
int BubbbleSort(int n){
	int count=0;
	int swap=1;
	int i,s;
	while (swap){
		swap=0;
		count++;
		for(i=1;i<n;i++)
			if(a[i]>a[i+1]){
				s=a[i];
				a[i]=a[i+1];
				a[i+1]=s;
				swap=1;
			}
	}
	return count;
}

int main() {
	int n;
	cin >> n;	
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cout << BubbbleSort(n);
}
