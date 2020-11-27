#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,y,a,b;
	float const pi=3.14;
	
	cout<<"x = "; cin>>x;
	if(x<5)
	{
		y=sin(x)+sqrt(fabs(x-5));
	    cout<<y;

	}
	else
	if(x=5)
	{
		y=5.45*5.45*cos(M_PI)+log(x+2);
        cout<<y;
	}
	else
	if(x>5)
	{
		
		y=(x-5)*(x-5)*tan(x/2);
		cout<<y<<endl;
	}
	 

	return 0;
}
