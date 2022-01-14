#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T)
{  int a[3],b[3],s1=0,s2=0;
for(int i=0;i<3;i++)
{
cin>>a[i];
s1+=a[i];
}
for(int i=0;i<3;i++)
{
cin>>b[i];
s2+=b[i];
}
if(s1<s2)
cout<<"SLOTH"<<endl;
else if(s1>s2)
cout<<"DRAGON"<<endl;
else
{
    if(a[0]<b[0])
    cout<<"SLOTH"<<endl;
    else if(a[0]>b[0])
    cout<<"DRAGON"<<endl;
    else 
    {
        if(a[1]<b[1])
    cout<<"SLOTH"<<endl;
    else if(a[1]>b[1])
    cout<<"DRAGON"<<endl;
    else
    { if(a[2]<b[2])
    cout<<"SLOTH"<<endl;
      else if(a[2]>b[2])
    cout<<"DRAGON"<<endl;
    else
    cout<<"TIE"<<endl;
    }
    }
}
    T--;
}return 0;
}