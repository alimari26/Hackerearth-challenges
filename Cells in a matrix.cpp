/*
You are given an integer N denoting an NxN matrix. Initially, each cell of the matrix is empty. You are given K tasks. In each task, you are given a cell i,j where cell i,j  represents the i  row and j column of the given matrix.

You have to perform each task sequentially in the given order. Each task is described in cell i,j . For each task, you have to place X in each cell of row i and each cell column j . After you complete each task, you are required to print the number of empty cells in the matrix.  

Input format

The first line contains two space-separated integers n and k where n  is the number of rows and columns in the given matrix and k is the number of tasks respectively.
Next k lines contain two space-separated i integers j and .

Problem taken from Hackerearth - Interview prepping questions -Easy

Print  space-separated integers denoting the number of empty cells in the matrix.
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];

int howmanyleft(int n){
   int count=0, i, j;
   for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
          if(a[i][j]==0)
            count++;
   return count;
}

int solve( int n,int i, int j) {
   for(int k=1;k<=n;k++){
      a[i][k]=1;
      a[k][j]=1;
   }
   return howmanyleft(n);
}


int main() {

   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, k;

   cin >> n >> k;

   while(k--) {
      int i, j;

      cin >> i >> j;

      cout << solve(n,i, j) << ' ';
   }

   return 0;
}