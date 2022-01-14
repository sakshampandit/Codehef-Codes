#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int att;
	cin>>att;
	while(att--)
	{
	    long long int a[2],b[2],c[2],f=0,g=0,h=0;
	    for(int i=0;i<2;i++)
	        cin>>a[i];
	    for(int i=0;i<2;i++)
	        cin>>b[i];
	    for(int i=0;i<2;i++)
	        cin>>c[i];
	    for(int i=0;i<2;i++)
	    {
	        f+=a[i];
	        g+=b[i];
	        h+=c[i];
	    }
	    if((f>g)&&(f>h))
	        cout<<f<<endl;
	    else if(g>h)
	        cout<<g<<endl;
	    else
	        cout<<h<<endl;
	}
	return 0;
}