/*Let ai be the number of digits in the base x representation of i. 
Determine the sum of all ai, with I between 0 and n for the provided n and x.
Input: first line: a single integer t
next t lines two integers, n and k.
Problem taken from the C++ Interview for Coding-Hackerearth.com*/



#include<bits/stdc++.h>
using namespace std;

long long solve (int k, long long n) {
long long sum =0;
long long j;
for(long long i =0; i<=n ;i++){
    j=i;
    sum++;

    while(j>=k){ //    while((j-(j%k))/k!=0){
        j=j/k;
        sum ++;
    }
}
return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long n;
        cin >> n;
        int k;
        cin >> k;

        long long out_;
        out_ = solve(k, n);
        cout << out_;
        cout << "\n";
    }
}