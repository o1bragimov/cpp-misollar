#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,a,b,c,s;
	
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
	p=(a+b+c)/2;
	
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout<<"p = "<<p<<endl;
	cout<<"s = "<<s<<endl;
	return 0;
}
