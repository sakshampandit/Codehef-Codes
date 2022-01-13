#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int b,n,m;
cin>>b;
cin>>n;
cin>>m;
int x[n];
int y[m];
for(int i=0;i<n;i++)
{
    cin>>x[i];
}
for(int i=0;i<m;i++)
{
    cin>>y[i];
}int mm=-1;
for(int i=0;i<n;i++)
{ int s=0;
    for(int j=0;j<m;j++)
     {
        s=x[i]+y[j];
        if(b>=s) 
        mm=max(mm,s);
     }
}
cout<<mm<<endl;
return 0;
}