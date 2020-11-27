#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,y,a;
	do{
		cout<<"x = ";  cin>>x;
		cout<<"y = ";  cin>>y;
	//	cout<<"r3 = ";  cin>>r3;
	//	cout<<"v2 = ";  cin>>v2;
		
	a=(fabs(x)-fabs(y))/(1+fabs(x*y)) ;
		
	cout<<a<<endl;
	}while(true);
	return 0;
}
