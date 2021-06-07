/*You have been given an integer array A of size N. You need to print the 
number with the value closest to zero. If there are multiple elements, print the number with the greater value.
Problem taken from the C++ Interview for Coding-Hackerearth.com*/



#include<bits/stdc++.h>
using namespace std;

int Solve (int N, vector <int> A) {

   int num=0, val=A[0], flag=0;
   if(val>=0){
       flag =1;
   }
   for(int i =1; i<N; i++){
     if(abs(val)>=abs(A[i])){
        val=A[i];
        num = i;
     }}
   return val;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}