#include<iostream>
using namespace std;
int main()
{
	int a,max,b;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
    
    while(a!=b)
    {
    	if(a>b)
    	{
    		a=a%b;
		}
		else
		{
			b=b%a;
		}
		
		if(a==0) 
		max=b;
		else
		max=a;
	
	cout<<max<<endl;
    }
    return 0;
}
