#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n,m;
cin>>n;
cin>>m;
int a[n],b[m],c[m+n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<m;i++)
{
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
for(int i=0;i<n;i++)
{
    c[i]=a[i];
    
}
for(int i=0;i<m;i++)
{
    c[n+i]=b[i];
}
sort(c,c+(n+m));
if((n+m)%2==0)
{
int x=n/2;
float med=0.5*(c[x]+c[x+1]);
cout<<med<<endl;
}
else 
{int y =(n+m)/2;
cout<<c[y]<<endl;
}
return 0;
}