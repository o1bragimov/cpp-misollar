#include<iostream>
using namespace std;
int main()
{
	int a,n,m,b,sum,sum1=0,sum2=0;
	cout<<"n = "; cin>>n;
	
	for(int i=1; n>i; i++)
	{
		sum1=0;
		for(int j=1;i>j; j++)
		{
		if(i%j==0)
		{
			sum1=sum1+j;
		}
	     }
	   
	if(sum1>i)
		{
			sum2=0;
			for(int k=1; sum1>k; k++)
			{
				if(sum1%k==0)
				{
					sum2=sum2+k;
				}
            }
		

		if(sum2==i && i!=sum1)
		{
		
			cout<<i<<" "<<sum1<<endl;
        }
	}
}
	
	return 0;
} 
