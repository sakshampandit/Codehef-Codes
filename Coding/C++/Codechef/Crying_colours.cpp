#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int att;
	cin>>att;
	while(att--)
	{
	    int n,a[3][3],i,j,count,sum1,sum2;
	    cin>>n;
	    for(i=0;i<3;i++)
	        for(j=0;j<3;j++)
	            cin>>a[i][j];
	   sum1=a[0][1]+a[0][2]+a[1][2];
	   sum2=a[1][0]+a[2][0]+a[2][1];
	   if(sum1>sum2)
	       count=sum1;
	   else
	       count=sum2;
	   cout<<count<<endl;
	}
	
	return 0;
}