#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int i,n;
float p=0,q=0,r=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    if(a[i]>0)
    p++;
    else if(a[i]<0)
    q++;
    else
    r++;
}float d1=0.0,d2=0.0,d3=0.0;
d1=p/n;
d2=q/n;
d3=r/n;
cout<<d1<<endl;
cout<<d2<<endl;
cout<<d3<<endl;
return 0;
}