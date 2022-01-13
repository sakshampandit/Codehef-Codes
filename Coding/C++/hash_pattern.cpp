#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
int i,n,k,j;
cin>>n;
for(i=n-1;i>=0;i--)
{
    for(k=0;k<=(i-1);k++)
    {
        cout<<" ";
    }
    for(j=n-1;j>=i;j--)
    {
        cout<<"#";
    }
    cout<<endl;
}
return 0;
}