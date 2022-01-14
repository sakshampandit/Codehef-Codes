#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}int max=*max_element(a,a+n);
 int min=*min_element(a,a+n);
int c=0,p=0;
for(int i=min;i<=max;i++)
{c=0;
for(int j=0;j<n;j++)
{
    if(i==a[j])
    ++c;
}p+=c/2;

}
cout<<p<<endl;
return 0;
}