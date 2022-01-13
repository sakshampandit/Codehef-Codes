#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cin>>n;
cin>>k;
int a1[n];
for(i=0;i<n;i++)
{
    cin>>a1[i];
    
}
/*for(i=0;i<n;i++)
{
    cout<<a1[i];
    
}cout<<endl;
for(i=0;i<n;i++)
{
   
    cout<<a2[i];
}cout<<endl;*/
int c=0;
for(i=0;i<n;i++)
{
    for(j=(i+1);j<n;j++)
    {
        if((i<j)&&(a1[i]+a1[j])%k==0)
        ++c;
    }
}cout<<c<<endl;
return 0;
}