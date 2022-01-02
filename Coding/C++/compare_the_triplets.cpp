#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
int i,a[10],b[10],s1=0,s2=0;
for(i=0;i<3;i++)
{
    cin>>a[i];
    //cout<<" ";
}
for(i=0;i<3;i++)
{
    cin>>b[i];
    //cout<<" ";
}
for(i=0;i<3;i++)
{
    if(a[i]>b[i])
    s1+=1;
    else if(a[i]<b[i])
    s2+=1;
    else
    {s1=s1;
    s2=s2;}
}
cout<<s1<<" "<<s2<<endl;
return 0;
}