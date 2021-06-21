/*
There is a lottery winner who has lives in a house which has R*C rooms such that there are R rows where each row has C rooms and C columns and each column has R rooms, he will receive N coins worth X $ as a winner. He will place each coin in one of R*C rooms and also note that more than one coin can be placed in a single room. You will be given which rooms he has chosen. Now robbers have known about the coins and want to loot him as much as possible. Robbers will do the following:

Column wise: For every column they will choose at most one coin to rob.
Row wise: For every row they will choose one coin to rob.
If they rob coin i, they will get an amount worth Xi and it is obivious that robbed coins will not be persent. They will rob optimally.

What is the maximum possible sum of amount robbers can rob?
Problem taken from Hackerearth - Interview prepping questions -HARD
*/
#include <iostream>

using namespace std;

class ban{
	public:
		int row=0;
		int collumn=0;
		int value=0;
};
int main() {
	int T;
	cin >> T;
	int n,r,c,x,y,z;	//n=no of coins, r=rows, c=collumns, in desclarations: x=row, y=collumn, z=value		
	int i=0,j;				
	while (T){
		cin>>n>>r>>c;
		i=1;
		ban coin[100000];
		while(i<=n){
			cin>>x>>y>>z;
			coin[i].row=x;
			coin[i].collumn =y;
			coin[i].value =z;
			i++;
		}
		int max=0, maxc=0,sum =0;
		for(i=1;i<=r;i++){
			max=0;
			for(j=1;j<=n;j++){
				if(coin[j].row==i){
					if(coin[j].value>max){
						max=coin[j].value;
						maxc = j;
					}
				}
			}
		sum +=max;
		coin[maxc].value =0;

		}
		for(i=1;i<=c;i++){
			max=0;
			for(j=1;j<=n;j++){
				if(coin[j].collumn==i){
					if(coin[j].value>max){
						max=coin[j].value;
						maxc = j;
					}
				}
			}
		sum +=max;
		coin[maxc].value =0;

		}
		cout<<sum<<endl;


		T--;
	}	
}

