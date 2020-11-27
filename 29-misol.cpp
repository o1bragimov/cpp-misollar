#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,p,q,s;
	
	cout<<"x = "; cin>>x;
	s=0;
	p=1;
	for(int i=256; i>2; i=i/2)
	{
		p=pow(x,2)+(i/(p*pow(x,2)));
	}
	s+=x/p;
	cout<<s<<endl;
	return 0;
}
