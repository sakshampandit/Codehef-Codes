#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int att;
	cin>>att;
	while(att--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n],i,c=0,t,j,sum=0;;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]<a[j])
	            {
	                t=a[i];
	                a[i]=a[j];
	                a[j]=t;
	            }
	        }
	    }
	    t=0;
	    for(i=0;i<n;i++)
	    {
	        sum+=a[i];
	        c++;
	        if(sum>=x)
	        {
	            t=1;
	            break;
	        }
	    }
	    if(t)
	        cout<<c<<endl;
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}