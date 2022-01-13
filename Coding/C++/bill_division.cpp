#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n,k,bc;
cin>>n;
cin>>k;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cin>>bc;
int s=0;
for(int i=0;i<n;i++)
{
    if(i!=k)
     s+=a[i];}
     int ba=s/2;
     if(ba<bc)
     cout<<(bc-ba)<<endl;
     else
     cout<<"Bon Appetit"<<endl;
return 0;
}