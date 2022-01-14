#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int q,x,y,z;
cin>>q;
while(q)
{
cin>>x;
cin>>y;
cin>>z;
int d1,d2;
d1=abs(z-x);
d2=abs(y-z);
if(d1>d2)
cout<<"Cat B"<<endl;
else if(d2>d1)
cout<<"Cat A"<<endl;
else 
cout<<"Mouse C"<<endl;
q--;
}
return 0;
}