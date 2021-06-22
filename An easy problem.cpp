/*
Mr X loves his clock. His clock displays time in the hh:mm Format using the 24 hour system, the first 2 characters in the string are used to display the current hour, with possible leading zeros. Also, the last 2 characters are used to display the current minutes, also with possible leading zeroes.

Now, Mr X came up with a new thing, where he calls a particular time displayed by the clock good if the sum of all digits written on the clock during that time is divisible by a given number x.

You have been given the current time displayed by the clock and an integer x. You need to find the minimum number of minutes Mr X needs to wait, to see a good time being displayed by the clock. If the clock is already displaying a good time, Mr X does not need to wait at all.

If the clock will never ever display a good time, then print -1  instead as the answer.

Problem taken from Hackerearth - Interview prepping questions -Easy
*/

#include <iostream>

using namespace std;

int main() {
	int h,m,x;
	char c;
	cin >> h>>c>>m>>x;		
	int flag =0,flag2=0;
	int initialh=h,initialm=m;
	int count=0;
	if((h%10+(h/10)+m%10 +m/10)%x==0){
		cout<<0;}
	else{
	while(flag ==0 && flag2==0){
		m++;
		if(m==60)
		{
			h++;
			m=0;
			if(h==24)
				h=0;
		}
		if((h%10+(h/10)+m%10 +m/10)%x==0){
			flag=1;
		}
		if(initialh==h && initialm ==m)
			flag2=1;

		count++;
	}
	if(flag==1)
		cout<<count;
	else cout<<-1;

	}

}

