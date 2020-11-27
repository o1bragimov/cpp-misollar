/*
// Bonus bolimi 12,13,14 misollar
#include<iostream>
using namespace std;
int main()

{
	int n,m,a,b;
	
	cout<<"n = "; cin>>n;
	m=1;
	a=0;
	while(n>m)
	{
		if(n%m==0)
		{
			a+=m;
		}
	m++;	
	}
		if(a<2)
		{
			cout<<"tub son";
		}
		else
		{
		    cout<<"tub son emas";
	    }
	
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int i,n,m;
	
	cout<<"n = "; cin>>n;
	cout<<"m = "; cin>>m;
	i=0;
	do
	{
			i++;
		
		{
			n=n-m;
		}
		
		
		
	}while(n>=m);
	cout<<"butun qismi  "<<i<<"\n"<<"qoldiq qismi "<<n<<endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int s,n,l;
	float m;
	cout<<"n = "; cin>>n;
	l=1;
	s=0;
	while(n>0)
	{
		m=n%10;
		s+=m;
		n=n/10;
		l++;
	}
	cout<<s;
	return 0 ;
}
