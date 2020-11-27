#include<iostream>
using namespace std;
int main()
{
	int n, s,k,c;
	cout<<"n = "; cin>>n;
	
	for(int i=1; n>=i; i++ )
	{
		s=0;
		for(int j=1; i>j; j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s>i)
		{
		c=0;
		for(int k=1; s>k; k++)
		{
			if(s%k==0)
			{
				c+=k;
			}
		}
		
		if(c==i)
		{
			cout<<i<<"  "<<s<<endl;
		}
	}
	}
	
	return 0;
}
