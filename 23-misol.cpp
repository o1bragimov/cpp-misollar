#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"n = "; cin>>n;
	for(int i=1; n>i; i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	    
	}
	if(s==n)
	{
		cout<<"mukammal son"; 
	}
	else
	{
		cout<<"mukammal son emas";
	}
}
