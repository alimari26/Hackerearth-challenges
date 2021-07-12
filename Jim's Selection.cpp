/*
Jim is a very talented actor. He has a audition for a part in a situation comedy. Well, he is not the only talented actor that showed up for the audition. There were many such actors. All the officials were in a dilemma for selecting the actor for the cast. Seeing no other alternative they decided to formulate a procedure for selecting the lead.

Here is the procedure:
1. All the actors were made to stand in a row. All were assigned a unique identity form 1 till n, from left to right.(If there are a total of n talented actors.)
2. Now all the actors at the odd positions were asked to leave.
3. From all the remaining actors, all the actors at the odd positions were asked to leave again.
4. The above procedure was repeated till only 1 actor remained.


(If only Jim showed up for audition, then he will be selected and no procedure will be used.)

Apart from being a talented actor, Jim also has a talent of over sleeping. So, he was late for the audition and therefore was made to stand at the right of the row and was assigned the identity n.

For Example: If n is 5
Row: 1 2 3 4 5 ( actors assigned a unique identity from 1 to 5, 5 is Jim)
After 1st removal, remaining actors
2 4
After 2nd removal, remaining actor
4

So, actor with identity 4 is selected.

Your task is simple, if the total number of actors is given, tell if Jim is selected for the part in the situation comedy or not.

INPUT:
The first line of input contains an integer, the number of test cases, t.
Then t lines follow, each containing an integer n the total number of talented actors for that test case.

OUTPUT:
The output contains t lines, each containing "Yes" or "No"( Without quotes), "Yes" if Jim is selected and "No" if Jim is not selected for that test case.
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <iostream>

using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		while(n%2==0)
			n=n/2;
		if(n==1)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
}
