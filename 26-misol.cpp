#include<iostream>
using namespace std;
int main()
{
	int n, tub;
	cout<<"n = "; cin>>n;
	for(int i=2; n>=i; i++)
	{
		tub=true;
		for(int k=2; i-1>=k; k++)
		{
			if(i%k==0)
			{
				tub=false;
			}
			
		}
		
		if(tub==true)
		{
			cout<<i<<endl;
		}
	}
}
