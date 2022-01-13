#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[n],b[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{ if(a[i]>=38)
{
    float d= a[i]/5.0;
   int n1=(int)(ceil(d)*5);
    int dif=n1-a[i];
    if(dif<3)
    b[i]=n1;
    else if(dif>=3)
    b[i]=a[i];
}
else
b[i]=a[i];
}
for(i=0;i<n;i++)
{
    cout<<b[i]<<endl;
}
return 0;
}