/*
You are given a number N. In one operation you can either increase the value N by 1 or decrese it by 1.
Determine the minimum number of operations required to convert the number N to a number P such that P is a palindtrome in binary.


Problem taken from Hackerearth-June circuits'21
*/
#include <iostream>

using namespace std;
string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int paindcheck(int n){
	string a;
	a=toBinary(n);
	int flag =0;
	for(int i=0;i<(a.length()/2);i++){
		if(a[i]!=a[a.length()-i-1])
			flag=1;
	}
	if(flag ==0)
		return 1;
	else return 0;
}
int main() {
	int t;
	cin >> t;	
	int n, flag=0,count;
	while(t){
		cin>>n;
		flag=0;
		count=0;
		while(flag==0){
			flag = paindcheck(n+count);
			if(flag ==0)
				flag = paindcheck(n-count);
			count++;
		}
		cout<<count-1<<endl;
		t--;
	}									
	
}

