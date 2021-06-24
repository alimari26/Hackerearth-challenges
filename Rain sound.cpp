/*You like the sound of rain only if the sound ranges from l to r units. Every cloud makes s unit of sound. Determine the minimum and the maximum number of clouds that can produce the sound in the provided range.

Input format

First line: One integer T denoting the number of test cases
Next T lines: Three integers l,r and s denoting the provided range of the rain sound and the units of sound produced by each cloud
Problem taken from Hackerearth - Interview prepping questions -Easy
*/
#include <iostream>

using namespace std;

int main() {
	int T, l, r, s, min, max;
	cin >> T;								
	while(T){
		cin>>l>>r>>s;
		if(s>r){
			cout<<"-1 -1";
		}
		else{
		if(l%s==0)
			min =l/s;
		else min = l/s +1;
		max = r/s;
		if(min>max)
			cout<<"-1 -1";
		else cout<<min<<" "<<max;}
		T--;
		cout<<endl;
	}
}

