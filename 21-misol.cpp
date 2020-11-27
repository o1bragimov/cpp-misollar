#include<iostream>
using namespace std;
int main()
{
	int n,k,x;
	cout<<"n = "; cin>>n;
	k=0;
	while(n>0)
	{
	
	x=n%10;
	n/=10;
	k+=x;
	
	}
	cout<<"raqamlar yigindisi = "<<k<<endl;
	return 0;
}
