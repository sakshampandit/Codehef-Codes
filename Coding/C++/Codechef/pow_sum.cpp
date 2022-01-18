#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int check(int s);
int sum(int s,int a[], int i, int j,int n);
void value(int i,int j,int n);
int main()
{ int T;
cin>>T;
while(T)
{   int n,i,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0,s=0,asum=0;
    for(int i=0;i<n;i++)
     s+=a[i];
      if(check(s))
      cout<<c<<endl;
      else
      {  while(1)
         { c=1;
          for(i=0;i<n;i++)
          {
              int s=0;
              for(j=i;j<n;j++)
              {
                  s+=a[j]*pow(2,c);
                   asum=sum(s,a,i,j,n);
                if(check(asum))
                break;
              }
          }if(check(asum))
          break;
          c++;

          
         }
      cout<<(c)<<endl;
      cout<<j<<" "<<i<<endl;
      cout<<(j-i+1)<<" "<<pow(2,c)<<endl;
      value(i,j,n);
      
       
      } T--;
}
 return 0;   
}
int check(int s)
    {  int p=0,j=0;
        while(p<s)
       p=pow(2,j++);
           if(s==p)
           return 1;
           else 
           return 0;
    }
int sum(int s,int a[1000], int x, int y,int n)
{
  int t,s1=0;
  for(t=0;t<n;t++)
  {
      if(t<x&&t>y)
      s1+=a[t];
  } s1+=s;
  return s1;
}
void value(int i,int j,int n)
{
    for(int t=0;t<n;t++)
    {
        if(t<i&&t>j)
        cout<<(t+1)<<endl;
    }
}