#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,y,d;
	
	cout<<"x = "; cin>>x;

	
	if(x>6)
	{
		cout<<"y = "<<3*pow(x,4)+2*pow(x,2);
	}
	else
	if(3<=x && x<=6 )
	{
	cout<<"y = "<<3*pow(x,2)-2*x<<endl;
    }
	else
	if(x<3)
	{
	cout<<"d = "; cin>>d;
	cout<<"y = "<<3*pow(sin(d*x),2)+d<<endl;
    }
	return 0;
}
