#include<iostream>
using namespace std;
int main()
{
	float q,s,i,j;
	i=103;
	j=101;
	q=1;
	s=0;
	while(i>=1 && j>=1)
	{
	j=i+1/j;	
	i=i-2;
	}
	s=1/j;
	cout<<s;
	
	return 0;
}
