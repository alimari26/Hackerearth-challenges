/*
You are given an integer array A consisting of N elements. For each element, you are required to find the length of the valley that is defined as:

Let i be the current index and  and  be the leftmost and rightmost index satisfying this property a[l]>a[l+1]>....>a[i]<a[i+1]<<...a[r], then r-l+1 is the length of the valley. Also, assume that if A is [7,2,1,5,7,9], then the answer is[1,2,6,3,2,1] .
Problem taken from Hackerearth - Interview prepping questions -Medium
*/
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;	
	int n, a[500000];
	int l,r, calc;
	int flagl=0,flagr=0;
	while(t){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			calc=0;
			flagl=0;
			flagr=0;
			///l=0
			if(i==0){
				l=0;
			r=i+1;
			while(flagr == 0 && r<n){
				if(a[r]>a[r-1])
					r++;
				else flagr =1;
			}
			if(flagr==0)
				r=n-1;
			calc=r;
			}
			//r=n-1
			else if(i==n-1){
				r=n-1;
				l=i-1;
				while(flagl == 0 && l>=0){
				if(a[l]>a[l+1])
					l--;
				else flagl =1;
			}
			if(flagl==0)
				l=0;
			calc = r-l;
			}
			//mid
			else{
			l=i-1;
			r=i+1;
			//left
			while(flagl == 0 && l>=0){
				if(a[l]>a[l+1])
					l--;
				else flagl =1;
			}
			if(flagl==0)
				l=0;
				//right
			while(flagr == 0 && r<n){
				if(a[r]>a[r-1])
					r++;
				else flagr =1;
			}
			if(flagr==0)
				r=n-1;
			if(l==0 && r==n-1)
				calc = n;
			else if(l==0)
				calc = r;
			else if (r=n-1)
				calc = r-l;
			else calc = r-l+1;
			}
			//cout<<l<<" "<< r<<endl;
			cout<<calc<<" ";
			
		}
		t--;
		cout<<endl;
	}								

}

