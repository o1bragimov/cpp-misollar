#include<iostream>
using namespace std;
int main()
{
	int n,c=0,s=0;
	
	cout<<"n = "; cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		s=0;
	  for(int k=1; i>k; k++)
	  {
	  	if(i%k==0)
	  	{
	  		s=s+k;
		  }
	  }
	  if(s>i)
	  {
	    c=0;
	  for(int m=1; s>m; m++)
	  {
	  	if(s%m==0)
	  	{
	  		c=c+m;
		  }
	  }
	  if(c==i)
	  {
	  	cout<<i<<"  "<<s; 
	  }
	}
	
	}
	
	return 0;
}
