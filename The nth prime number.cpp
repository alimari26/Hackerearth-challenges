
#include <iostream>

using namespace std;
int isprime(int x){
	int a = x-1, flag=0;
	while(a>1 && flag==0){
		if(x%a==0)
			flag=1;
	}
	if(flag ==0)
		return 1;
	else return 0;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin>>n;
	long long int x=2;
	while(n--){
		while(isprime(x)==0)
			x++;
		x++;
	}
	x--;
	cout<<x;
}