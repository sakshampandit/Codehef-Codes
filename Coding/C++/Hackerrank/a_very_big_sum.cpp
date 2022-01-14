#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cin>>n;
 long long int a[n],s=0;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
     s+=a[i];
 }
 cout<<s<<endl;
 return 0;
}