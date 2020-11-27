#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
    float m,n,x,y,z;
	
	cout<<"x = "; cin>>x;
	cout<<"y = "; cin>>y;
	cout<<"z = "; cin>>z;
	
	m=pow(x+y+z/2,2);
	
	n=pow(x*y*z,2);
	
	if(m<n)
	{
	cout<<m+1;
	}
	else
	{
		cout<<n+1;
	}
	return 0;
}
