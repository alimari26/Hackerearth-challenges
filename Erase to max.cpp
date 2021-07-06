/*
You are given an array A of size N. You have to select any value 'x' from  and remove its all occurrences. You need to perform this operation exactly once.

You need to obtain the maximum possible final sum of A.
Problem taken from Hackerearth - Interview prepping questions 
*/


#include<bits/stdc++.h>
using namespace std;

long long getResult (vector<int> Arr, int maxnr, int n) {
   long long int maxsum=0, cursum, i , j,flag;
   for(i=1;i<=maxnr;i++)
        {
            cursum=0;
            flag=0;
            for(j=0;j<n;j++)
                if(Arr[j]!=i){
                    cursum+=Arr[j];
                  }
                else flag=1;
            if(flag==1)
                maxsum=max(maxsum,cursum);
        }
    return maxsum;
}

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
        vector<int> Arr(N);
        int maxnr=0;
        for(int i_Arr=0; i_Arr<N; i_Arr++)
        {
        	cin >> Arr[i_Arr];
            maxnr=max(maxnr, Arr[i_Arr]);
        }

        long long out_;
        out_ = getResult(Arr,maxnr,N);
        cout << out_;
        cout << "\n";
    }
}