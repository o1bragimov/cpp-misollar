#include<iostream>
using namespace std;
int main()
{
	
	int n,m,l,k;
	cout<<"n = "; cin>>n;
	
	for(int i=1; n>i; i++)
	{
		m=0;
		for(k=1; i-1>=k; k++ )
		{
			if(i%k==0)
			{
				m=m+k;
			}
	}
		if(m==i)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
