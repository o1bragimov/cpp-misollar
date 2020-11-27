#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float r1,r2,r3,r;
	do{
		cout<<"r1 = ";  cin>>r1;
		cout<<"r2 = ";  cin>>r2;
		cout<<"r3 = ";  cin>>r3;
	//	cout<<"v2 = ";  cin>>v2;
		
		r=(r1*r2*r3)/(r1*r2 + r1*r3 + r2*r3);
		
		cout<<r<<endl;
	}while(true);
	return 0;
}
