/*
Pikachu loves battling with other Pokemon. This time he has a team of n Meowstic to fight, i of which has strength ai. He wants to fight with all of them k times. Team Meowstic came to know about this and now they have devised a strategy to battle against the mighty Pikachu.

All the n Meowstic stand in a straight line numbered from 1 to n . Before every round of battle, they simultaneously use a move, called Helping Hand. It changes the attacking power of Team Meowstic as follows:

The attacking power of first Meowstic remains a1 .
The attacking power of remaining Meowstic changes as ai = ai|ai-1 where 2<=i <=n and A|B represents the bitwise OR of A and B 
For example, if the current attacking powers are , after using the Helping Hand, the powers change to , or .

Help Pikachu by finding the attacking powers of all Meowstic when he fights each of them for the last time, that is, for the  round.

Note that, the influence of Helping Hand remains forever, and attacking powers DO NOT revert back after any round.

*/
#include <iostream>

using namespace std;

int main() {
	int n,k;
	long long int a[100000];
	cin>>n>>k;
	for(int i =0; i<n;i++)
		cin>>a[i];
	for(int i=1; i<=k;i++)
		{
			for(int j=n;j>=2;j--)
				a[j]=a[j]|a[j-1];
		}	
	for(int i =0; i<n;i++)
		cout<<a[i]<<" ";							
}

