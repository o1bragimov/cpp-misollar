#include<iostream>
using namespace std;
int main()
{
	float a0, k, a, s,n ;
	
	cout<<"n = "; cin>>n;
	k=0;
	a0=1;
	s=0;
	while(n>k)
	{
		k=k+1;
	
		a=k*a0+1/k;
	
	//	a0=a;
	
	//	k=k+1;
	
		s+=a;
    }
	cout<<s<<endl;
	
	return 0;
}
