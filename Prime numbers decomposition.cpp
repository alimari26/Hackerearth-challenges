//prime numbers decomposition
#include <iostream>

using namespace std;
int main(){
//it will only consider prime numbers because the others have been already reduced when div was smaller ak. n%4 won't be 0 if we deduced all the 2s from n.
int n;
cin>>n;
int div=2,pd;
while(n>1){
	pd=0;//power of d
	while(n%div==0){
		pd++;
		n=n/div;
	}
	if(pd>=1)
		cout<<div<<"^"<<pd<<endl;
	div++;
}

return 0;
}
