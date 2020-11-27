#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float g,a,r,n,s,p,R;
	float const pi=3.14;
	
	cout<<"radius  = "; cin>>r;
	cout<<"tomoni  = "; cin>>n;
	
	g=(180*(180/n))/pi;
	a=r*2*tan(g);
//	R=(a/2)/(1/sin(180/n));
//	s=(1./2.)*pow(R,2)*n*sin(360/n);
	

//	s=(a*n*r)/2;
	p=n*a;
	s=(p*r)/2;
	cout<<a<<endl;
	cout<<"perimetri = "<<p<<endl;
	cout<<"yuzasi = "<<s<<endl;
	
	return 0;
}
