#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int x1,x2,v1,v2,d=0;
cin>>x1;
cin>>v1;
cin>>x2;
cin>>v2;
 if(((x1>x2)&&(v1>v2))||((x2>x1)&&(v2>v1)))
 cout<<"NO";
 else
 {d=(x1>x2)?(x1-x2):(x2-x1);
while(d>0)
{
    x1+=v1;
    x2+=v2;
    d=(x1>x2)?(x1-x2):(x2-x1);
}
if(d==0)
cout<<"YES";
else
cout<<"NO";
 }
return 0;
}