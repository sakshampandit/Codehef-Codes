#include<stdio.h>
#include<stdlib.h>
int main()
{ int l;
    scanf("%d",&l);
char c[100],d[100]="";
for(int i=0;i<l;i++)
scanf("%c",&c[i]);
int k=0,s=0;
for(int i=0;i<l;i++)
{
    if(isdigit(c[i]))
    {d[k]=d[k]+c[i];
    s+=c[i];
    k++;}
}printf("The digits present in the string is");
printf(" ");
for(int i=0;i<k;i++)
{
 printf("%c",d[i]);
}printf("\n");
printf("The sum of the digits is %d",s);
return 0;
}   