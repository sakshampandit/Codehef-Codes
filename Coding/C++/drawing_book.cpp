#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{int c=0,n,k;
cin>>n;
cin>>k;
if(k==1)
cout<<"0"<<endl;
else
{
    c=1;
    for(int i=2;i<n;i+=2)
    {
      if(i==k||(i+1)==k)
      break;
      else
      ++c;
    }int t=n/2;
    if(c<(t-c))
    cout<<c<<endl;
    else
    cout<<(t-c)<<endl;
}
return 0;
}