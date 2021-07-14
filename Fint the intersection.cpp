/*
You are given a set of N line segments that are either horizontal or vertical. Write a program to determine the points of intersection of all the horizontal line segments with the vertical line segments.

Note: Do not consider the coincident endpoints as intersections.

Input format

First line: N
Next  lines: Four space-separated integers x1, y1, x2, y2, and  denoting the coordinates of two line segments
Output format

Sort and print all the intersection points of the horizontal and the vertical line segments. The intersection point is represented as x, y  with space between them.
Problem taken from Hackerearth - Interview prepping questions 
*/
#include <bits/stdc++.h>
using namespace std;
#define PR(x) printf("%d\n",x)
#define MAXSIZE 10005
#define y1 aasdfasdfasdf

int N,x1[MAXSIZE],y1[MAXSIZE],x2[MAXSIZE],y2[MAXSIZE],ans_size,outx[MAXSIZE],outy[MAXSIZE];

void solve()
{		ans_size=0;
		int hov[N]={0};//1=h,2=v;
		for(int i=0;i<N;i++)
			{
				if (x1[i]==x2[i])
					hov[i]=2;
				else hov[i]=1;
			}
		for(int i=0;i<N;i++){
			if(hov[i]==1)
				for(int j=0; j<N;j++)
					if(hov[j]==2){
						outx[ans_size]=x1[j];
						outy[ans_size]=y1[i];
						ans_size++;
					}
		}
}

int main()
{
	int i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
	
	solve();
	for(i=0;i<ans_size;i++)
		printf("%d %d\n",outx[i],outy[i]);
	return 0;
}