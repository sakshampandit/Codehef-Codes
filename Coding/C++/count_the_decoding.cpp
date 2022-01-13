#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int countWays(char* digits, int n);
int countDecoding(char* digits, int n);
int main()
{ 
    char digits[5000];
    int i=1;
while(i!=0)
{
    int n;
cin>>digits;
n=strlen(digits);
i=digits[0]-48;
do
{
//cout<<n<<endl;
if(digits[0]!='0'){
cout<<countWays(digits,n)<<endl;
break;
}else
break;
n--;
}while(n!=0);
}
return 0;
}
int countDecoding(char* digits, int n)
{
    
    if (n == 0 || n == 1)
    return 1;
    if (digits[0] == '0')
        return 0;

    
    int count = 0; 

    if (digits[n - 1] > '0')
        count = countDecoding(digits, n - 1);
    if (digits[n - 2] == '1'
        || (digits[n - 2] == '2' 
        && digits[n - 1] < '7'))
        count += countDecoding(digits, n - 2);

    return count;
}
int countWays(char* digits, int n)
{
    if (n == 0 || (n == 1 && digits[0] == '0'))
        return 0;
    return countDecoding(digits, n);
}