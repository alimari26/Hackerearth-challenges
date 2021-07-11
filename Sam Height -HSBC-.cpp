/*
Sam among his friends wants to go to watch a movie in Armstord Cinema.
There is something special about Armstord cinema whenever people come in the group here. They will get seats accordingly their heights. Sam as a curious guy always wants to sit in the middle as cinema has the best view from the middle.
Now, Sam as the leader of his group decides who will join him for the movie.
Initially, he has N-1 friends with him (N including him).
You are given N-1 numbers that represent the heights of Sam's friends.
You are given the height of Sam as well.

Now, Sam can do two operations:
1. He can call a new friend of height H.
2. He can cancel any of his friend invitations.

Each operation will cost him a unit time.
He wants to do this as soon as possible.
Problem taken from Hackerearth - Interview prepping questions -Easy
*/
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int T;
	cin>>T;
	long long int n,s,i,bef,aft,x;
	while(T--){
		cin>>n>>s;
		bef=0;
		aft=0;
		for(i=1;i<=n;i++){
			cin>>x;
			if(x>s)
				aft++;
			else bef++;
		}
		if(bef>aft)
			x=bef-aft;
		else x=aft-bef;
		cout<<x<<endl;
	}
	
}

