#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int a[5],max=0,min=0;
for(int i=0;i<5;i++)
{
    cin>>a[i];
}
sort(a,a+5);
for(int i=0;i<4;i++)
{
    min+=a[i];
}
for(int i=1;i<5;i++)
{
    max+=a[i];
}
cout<<min<<" "<<max;
return 0;
}