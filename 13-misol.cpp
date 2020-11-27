#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float r,a,b,c,s;
	
	cout<<"a = "; cin>>a;
//	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
		
	b=sqrt(pow(c,2)-pow(a,2));
	r=(a+b+c)/(a*b);
	
	cout<<"b = "<<b<<endl;
	cout<<"r = "<<r<<endl;
	return 0;
}
