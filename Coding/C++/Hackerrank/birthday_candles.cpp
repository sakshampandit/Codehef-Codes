#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
   cin>>a[i]; 
}int max=a[0],c=0;
for(int i=0;i<n;i++)
{
   if(max==a[i])
   ++c; 
}
for(int i=1;i<n;i++)
{
   if(max<a[i])
   {   c=0;
       max=a[i];
for(int i=0;i<n;i++)
{
   if(max==a[i]) 
   ++c;
}
}
}
cout<<c<<endl;
return 0;
}