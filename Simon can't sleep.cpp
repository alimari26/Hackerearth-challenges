/*
It's 12 o'clock and Simon cannot sleep.
He decided to stare at the clock until he falls asleep.
Count how many times the hands of the clock overlap between 00:00 and a time hh:mm;

Problem taken from Hackerearth-June circuits'21
*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	int a,b;
	char c;
	cin>>a>>c>>b;
	int count=0;
	if(a>=12){
		a=a-12;
		count =12;
	}
	if(b>a*5)
		count +=a+1;
	else count += a;
	cout<<count;
}


