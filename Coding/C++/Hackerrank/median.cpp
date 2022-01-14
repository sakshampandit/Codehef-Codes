#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int c=n/2;
cout<<a[c]<<endl;
return 0;
}