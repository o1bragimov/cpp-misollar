#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s, arif, geo;
	
	do{
		cout<<"a = "; cin>>a;
		cout<<"b = "; cin>>b;
		c=sqrt(a*b);
		s=(a+b)/2;
		cout<<s<<"  " <<c<<endl;
	}while(true);
	return 0;
}
