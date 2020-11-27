
#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
	int n;
	float i,m=1;
	
	for(n=1; n<=8; n++)
	{
		i=((n+6)/(pow(n,2)+4*n+1));
		
		m=m*i;
	}
	
	cout<<m<<endl;
	
	return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
	int i;
	float n,s=0;
	for(i=1; i<=17; i++)
	{
		n=((i+6)/(pow(i,4)+27*i+7));
		s=s+n;
	}
	cout<<s<<endl;
	
	return 0;
}
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
	int n, r, i;
	float h,q=1;
	float const e=2.718281;

	for(r=1; r<=8; r++)
	{ 

	for(i=1; i<=14; i++)
	{

		h = pow(-1,i)*((sqrt(5*pow(i,4)+pow(e,-r)+6))/(pow((cos(i+1)),3)-pow(r,-i)));
    }
		q=q*h;
		
	
   }
	cout<<q<<endl;
    
	return 0;
}
*/



