#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}