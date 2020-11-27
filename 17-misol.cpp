#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b;
	int d;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	
	a=a/b;
    d=((int)a) - ((int)b);
	cout<<setprecision(4)<<fixed<<a-d<<endl;
	return 0;
}
