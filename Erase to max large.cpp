/*
You are given an array A of size N. You have to select any value 'x' from  and remove its all occurrences. You need to perform this operation exactly once.

You need to obtain the maximum possible final sum of A.
Problem taken from Hackerearth - Interview prepping questions 
*/
#include<bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	cout.tie(NULL);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int Arr[1000000]={0};
        int maxnr=0;
        int x;
        long long int sum=0;
        for(int i_Arr=0; i_Arr<N; i_Arr++)
        {
        	cin >> x;
            Arr[x]++;
            sum+=x;
            maxnr=max(maxnr, x);
        }

        long long out_=0;
        for(int i =0; i<=maxnr;i++)
            if(Arr[i]>0)
                out_=max(out_,sum-(Arr[i]*i));

        cout << out_;
        cout << "\n";
    }
}