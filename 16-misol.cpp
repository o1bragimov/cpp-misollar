#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float y,x,a,b;
	
	cout<<"x = "; cin>>x;
	
	if(x>10)
	{
		cout<<3*pow(x,6)+2*pow(x,4);
	}
	else
	if(6<=x && x<=9)
	{
		cout<<3*pow(x,3)-2*x;
	}
	else
	if(x<6)
	{
		cout<<"d = "; cin>>a;
		cout<<3*sin(a*x)+a;
	}
	
	return 0;
}
