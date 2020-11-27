#include<iostream>
using namespace std;
int main()
{
	int n,s,q;
	cout<<"n = "; cin>>n;
	s=0;
	q=1;
	for(int i=1; n>=i; i++ )
	{
		q=1;
		for(int j=i; 2*i>=j; j++)
	    {
		
		q=q*j;
   }

		s+=q;
	
    }
	cout<<s<<endl;
	
	
	return 0;
}
