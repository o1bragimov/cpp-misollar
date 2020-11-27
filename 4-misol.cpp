#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int const g=10;
	float h,t;
	do{
		cout<<"h = "; cin>>h;
	//	cout<<"b = "; cin>>b;
		t=sqrt((2*h)/g);
		
		cout<<t<<endl;
	}while(true);
	return 0;
}
