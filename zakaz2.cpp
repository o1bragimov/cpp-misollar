#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,l,m;
	
	cout<<"n = "; cin>>n;
	l=1;
	m=0;
    for(int i=1; n>=i; i++)
    {
    	l=l*i;
    //	m=m+l;
	}
	m=m+l;
	cout<<m;
	
	return 0;
}
