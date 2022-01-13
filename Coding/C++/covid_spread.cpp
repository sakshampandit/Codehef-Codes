#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{int T;
cin>>T;
int n,d;
while(T)
{
cin>>n;
cin>>d;
int ip=1;
/*if(d==0)
ip=1;*/
if(d>=1&&d<=10)
ip=pow(2,d);
else if(d>=11)
ip=pow(2,10)*pow(3,(d-10));
if(ip<=n)
cout<<ip<<endl;
else
cout<<n<<endl;
T--;
}
return 0;
}