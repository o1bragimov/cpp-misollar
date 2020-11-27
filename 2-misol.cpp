#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int c,s,a,b;
	
	do{
		cout<<"a = "; cin>>a;
		cout<<"b = "; cin>>b;
		c=sqrt(pow(a,2)+pow(b,2));
		s=(a*b)/2;
		cout<<c<<"  " <<s<<endl;
	}while(true);
	return 0;
}
