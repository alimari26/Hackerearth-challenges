/*
You are given an integer array A. Your task is to calculate the sum of absolute difference of indices of first and last occurrence for every integer that is present in array A.

Formally, if element X occurs M times in the array at indices B1,B2,B3..BM, then the answer for X will be BM-B1 if array B is sorted.

You are required to calculate the sum of the answer for every such X that occurs in the array.

Refer to sample notes and explanations for better understanding.
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	long long int T,n,a[200000];
	cin>>T;
	while(T--){
		cin>>n;
		long long int maxnr=-1;
		for(int i=0; i<n;i++){
			cin>>a[i];
			maxnr=max(maxnr, a[i]);}
		long long int f=-1, l=-1;//first and last occurance
		long long int sum =0;
		for(int i=0; i<=maxnr;i++){
			f=-1;
			l=-1;
			for(int j=0;j<n;j++){
				if(a[j]==i)
					if(f==-1)
						f=j;
					else l=j;
			}
			//cout<<i<<" "<<f<<" "<<l<<" "<<sum<<" ";
			if(f<l){
				sum+=l-f;}
			//cout<<sum<<endl;
		}
		cout<<sum<<endl;
		
	}
}


