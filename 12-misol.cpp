#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float s,a,d,n;
	
	cout<<"a = "; cin>>a;
	cout<<"d = "; cin>>d;
	cout<<"n = "; cin>>n;
		
	s=(2*a+d*(n-1))*n/2;
	
	cout<<"s = "<<s<<endl;
	
	return 0;
}
