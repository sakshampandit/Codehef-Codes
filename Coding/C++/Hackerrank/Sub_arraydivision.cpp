#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,d,m;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
/*for(int i=0;i<n;i++)
{
    cout<<a[i];
}*/
cin>>d;
cin>>m;

int s=0,c=0;
for(int i=0;i<n;i++)
{s=0;
    for(int j=i;j<(i+m);j++)
     { 
         s+=a[j];
     }  
       // cout<<s<<endl;
        if(s==d)
        ++c;

    }
    cout<<c<<endl;
    return 0;
}

