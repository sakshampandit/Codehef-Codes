/*error in code*/
#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{ vector<int>a;
int n;
cin>>n;
int b[n];
for(int i=0;i<n;i++)
{cin>>b[i];
for(int j=0;j<i;j++)
a.push_back(b[j]);
int l=a.size();
int x=l/2;
float med=0.0;
if((l)%2==0)
med=0.5*(a[x]+a[x-1]); 
else
med=a[x];
cout<<med<<endl;
/*for(int i=0;i<n;i++)
cout<<a[i]<<endl;*/
}
return 0;
}