#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
	float x,y,a,b,c,d,x1,x2;
	
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
	
	d=pow(b,2)-4*a*c;
	
	if(d<0)
	{
		cout<<"tenglama haqiqiy yechimga ega emas";
	}
	else
	if(d==0)
	{
		x=-b/(2*a);
		cout<<"tenglama bitta yechimga ega  " <<x;
	}
	else
	if(d>0)
	{
		x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
		cout<<x1<<"  "<<x2;
	}
	
	return 0;
}
