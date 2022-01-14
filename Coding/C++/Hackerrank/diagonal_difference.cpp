#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
int i,j,n,s1=0,s2=0;
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
         s1=s1+a[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if((i+j)==(n-1))
    {s2=s2+a[i][j];
    }    
    }
    }
    int d=s1>s2?(s1-s2):(s2-s1);
    cout<<d<<endl;
    return 0;
}
