#include <bits/stdc++.h>

using namespace std;
int main() {
    
    int n,sum=0,maxm=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        maxm=max(maxm,sum);
        if(sum<0)
            sum=0;
    }
    cout<<maxm;
    return 0;
}