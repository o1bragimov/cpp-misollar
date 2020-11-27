#include<iostream>
using namespace std;
int main()
{
	int n,m,l;
	
	cout<<"n = "; cin>>n;

	l=n/10;
	m=n%10;
	
	cout<<"oxirgi raqam - "<<m<<endl;
	cout<<"birinchi raqam - "<<l<<endl;
	cout<<"raqamlar yigindisi - "<<m+l<<endl;

	return 0;
}
