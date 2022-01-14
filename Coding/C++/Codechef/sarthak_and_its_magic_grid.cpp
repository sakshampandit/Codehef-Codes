#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int att;
	cin>>att;
	while(att--)
	{
	    int n;
	    cin>>n;
	    long a[n][n];
	    int i=0,j;
	    while(i<n)
	    {
	        j=0;
	        while(j<n)
	        {
	            a[i][j]=1;
	            j++;
	        }
	        i++;
	    }
	    i=0;
	    while(i<n)
	    {
	        j=0;
	        while(j<n)
	        {
	            cout<<a[i][j]<<" ";
	            j++;
	        }
	        cout<<endl;
	        i++;
	    }
	}
	
	return 0;
}