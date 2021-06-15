/*N persons numbered from 1 to N went to the famous pie shop in the city. There were M different flavors available to eat.

There was only one pie left for each flavor in the shop. Everyone wanted to eat their favorite pies.

Some of them might be having the same choices, so they will have to share the pie equally. After eating the pie, everyone needs to pay for the pie to the owner. If two or more persons have shared the same pie, they will divide it equally among them.

The owner of the shop was confused as he couldn't calculate each of their bills. He only remembers what type of pie some of them had eaten and who had shared with whom. The following information was available ->

Type 1 -> x k : person x had eaten kth type of pie

Type 2 -> u v : person u and person v had eaten the same type of pie

You need to figure out how many different types of pies were eaten and how much everyone needs to pay so that owner can generate each of theirs bills.

Note : It is guaranteed that each type of person ate exactly one type of pie. The input data is such that it is always possible to generate a bill for each person. 
Problem taken from Hackerearth - Interview prepping questions -Medium*/

#include <iostream>

using namespace std;

int main() {
	long long int n, m, q;
	cin>>n>>m>>q;
	long long int cost[m];
	int pers[n][2],pie[m];
	long long int i,j;
	for (i=1;i<=n;i++){
		pers[i][0]=-1;
		pers[i][1]=-1;
	}
	for (i=1;i<=m;i++){
		pie[i]=0;
	}
	for(i=1;i<=m;i++){
		cin>>cost[i];
	}
	int type, a, b;
	for(i=1;i<=q;i++){
		cin>>type>>a>>b;
		if (type == 1)
			pers[a][0]=b;
		else {pers[a][1]=b;}
	}
	for(i=1;i<=n;i++){
		if(pers[i][0]==-1){
			pers[i][0]=pers[pers[i][1]][0];
		}
		else if(pers[pers[i][1]][0]==-1){
			pers[pers[i][1]][0]= pers[i][0];
		}
	}
	for(i=1;i<=n;i++)
	{
		pie[pers[i][0]]++;
	}
	int k=0;//how many pies
	for(i=1;i<=m;i++)
	{
		if(pie[i]!=0)
			k++;
	}
	cout<<k<<endl;
	for(i=1;i<=n;i++){
		float a=cost[pers[i][0]]/1.00;
		float b=pie[pers[i][0]]/1.00;
		cout<<a/b<<endl;
	}

	return 0;	
}
