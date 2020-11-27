/*#include<iostream>
using namespace std;
int main()
{
	int n,m, max,min;
	cout<<"n = "; cin>>n;
	cout<<n<<" ta son kiriting "<<endl;
	cin>>m;
	
	max = min = m;
	
	for(int i=2; n>=i; i++)
	{
		cin>>m;
	
		if(max > m)
		
		   max = m;
		
		if(min < m)
		
	    	min = m;
		
	}
	
	cout<<max<<" "<<min<<endl;
	
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int n,a,b, max,min,s;
	cout<<"n = "; cin>>n;
	cout<<n<<" ta (a,b) to'plamni kiriting "<<endl;
	cin >> a; cin>>b;
	 
	
	max=min=s;
	
	for(int i=2; n>=i; i++)
	{
		
	cin>>a; cin>>b ;
	 s=a*b;
		if(min>s)
		{
		   min=s;
	    }
   
		if(max<s)
		{
	    	max=s;
	    }
	}
	
	cout<<max<<endl;
	cout<<min<<endl;
	
	return 0;
}
