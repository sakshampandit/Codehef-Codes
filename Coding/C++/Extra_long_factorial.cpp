#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int factorial(int n)
{ long long int p=1;
  for(int i=1;i<=n;i++)
  p=p*i;
  return p;
}
int main()
{ int num;
    cin>>num;
    cout<<factorial(num)<<endl;
    return 0;
}