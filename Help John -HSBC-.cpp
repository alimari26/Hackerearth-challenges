/*
You are required to collect N numbers from a bag. Initially, the bag is empty. Whenever you put a number X in the bag, then the owner of the bag asks the question.

The questions are as follows:

What is the greatest integer that is smaller than X and present inside the bag?
What is the smallest number that is greater than X and present inside the bag?
If you answer both the questions correctly, then you can put X inside the bag. Your task is to answers the questions that are asked by the owner of the bag.
Problem taken from Hackerearth - Interview prepping questions -Easy
*/
#include <iostream>
using namespace std;

int a[100000];


int main() {
	int n,t1,t2;
	cin >> n;	
	int b=-1, c=-1;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		 b=-1;
		 c=-1;
		
		for(int j=1;j<i;j++){
			if(a[j]<a[i] && a[j]>b)
				b=a[j];
			if(a[j]>a[i]&& (a[j]<c || c==-1))
				c=a[j];
			}
		cout<<b<<" "<<c<<endl;
	}
}
