#include<iostream>
using namespace std;
int main()
{
	int k,tub,n,m,l;
	cout<<"n = "; cin>>n;
	
	tub=true;
	for(k=2; n-1>k; k++)
	{
	
		if(n%k==0)
		{
		tub=false;	
	//	cout<<"tub son emas";
		}
    }
		
		if(tub==true)
		{
			cout<<"tub son";
		}
		else
		{
		    cout<<"tub son emas";
        }
	
	
	return 0;
}
