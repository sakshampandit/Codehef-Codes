#include<cstdio>
#include<cstring>
#include<iostream>
#include<ctype.h> 
using namespace std;
int main()
{   int T;
  cin>>T;
  while(T)
  { 
    int l=0,c=0;
    string s;
    cin>>s;
    l=s.length();
    if(l>10)
    {
    cout<<s[0];
    c=0;
    for(int i=1;i<l-1;i++)
    { 
        if(isalpha(s[i])!=0)
        ++c; 
    
    }cout<<c;
    cout<<s[l-1]<<endl;
    }
    else
    cout<<s;
T--;
}
return 0;
}