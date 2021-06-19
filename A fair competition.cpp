/*
In competition, N participants are competing against each other for the top two spots. There are M friendly relations between participants. In each friendship relation, you will be given two integers L and R, indicating L and R are friends.

Note

If A and B are friends, B and C are friends, then A, B, C will have the same friend circle.
Two combinations are considered different if either first or second ranker is different.
The same friendship relation can occur multiple times in input, however, L will never be equal to R .
Now, the jury has to decide the winners for the top two spots but he does not want to select both participants from the same friend circle so the competition seems fairer. Find the number of ways in which he can do so.
Problem taken from Hackerearth - Interview prepping questions -Medium
*/
#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;										
	int n, m,l, r,j,k;

	int count=0;
	while(T){

		cin>>n>>m;
		int a[n];
		for(int i=1;i<=n;i++)
			a[i]=0;
		j=0;
		count=0;
		while(m){
			cin>>l>>r;
			if(a[l]!=0){
				if(a[r]==0)
					a[r]=a[l];
				else{
					k=a[r];
					for(int i=1;i<=n;i++)
						if(a[i]==k)
							a[i]=a[l];
				}
			}
			else if(a[r]!=0){
				a[l]=a[r];
			}
				else{
					j++;
					a[l]=j;
					a[r]=j;
				}
			m--;
		}
		//cout<<T<<endl;
		for(int i =1; i<=n;i++){
			for(int j =1; j<=n;j++){
				if(a[i]!= a[j]){
					count ++;
					//cout<<i<<" "<<j<<endl;
				}
			}
		}
		T--;
		cout<<count<<endl;
	}
return 0;
}
