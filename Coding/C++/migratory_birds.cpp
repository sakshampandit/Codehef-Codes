#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getMax(int a[],int n)
{
    int res=a[0];
    for(int i=0;i<n;i++)
    {
        res=max(res,a[i]);
    }
    return res;
}
int getMin(int a[],int n)
{
    int res=a[0];
    for(int i=0;i<n;i++)
    {
        res=min(res,a[i]);
    }
    return res;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    
}int min=getMin(a,n),max=getMax(a,n);
int cmax=0,num,nmax=0;
for(int i=min;i<=max;i++)
{ int c=0;
    for(int j=0;j<n;j++)
    {
        if(i==a[j])
        {
         ++c;
         num=i;
        }
    }if(cmax<c)
    {
        cmax=c;
        nmax=num;
    }
}
cout<<nmax<<endl;
return 0;
}