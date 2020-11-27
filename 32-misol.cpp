#include<iostream>
using namespace std;
int main()
{
	float i,x,s,p;
	
	cout<<"x = "; cin>>x;
	i=256;
	p=1;
	s=0;
	while(i>=2)
	{
		p=(i/x*x*p);
		s=s+x*x+p;
		i=i/2;
    	
           
//	s=s+(x*x+p);
}
	s=x/s;
	
	cout<<s;

	return 0;
}
