#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{int T;
cin>>T;
int t1,t2,r1,r2;
float k1=0.0,k2=0.0;
while(T)
{
    cin>>t1;
    cin>>t2;
    cin>>r1;
    cin>>r2;
     k1=((t1*t1)/(float)(r1*r1*r1));
     k2=((t2*t2)/(float)(r2*r2*r2));
    if(k1==k2)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    T--;
}
return 0;
}