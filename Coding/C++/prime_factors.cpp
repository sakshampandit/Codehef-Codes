#include<cstdio>
#include<iostream>
#include<ctype.h>
using namespace std;
int isPrime(int a)
{
  int i,flag=0;
  for(i=2;i<=a;i++)
  {
     if(a%i==0)
     flag++;
     
  }if(flag==1)
  return 1;
  else 
  return 0;
}
int main()
{
    int i,n,c=0;
    //cout<<"Enter the no."<<endl;
cin>>n;
for(i=2;i<=n;i++)
{
  if(n%i==0)
  {
      if(isPrime(i))
       ++c;
      
  }
}
cout<<c<<endl;
return 0;
}
