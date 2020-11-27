#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float t, t1, t2, v1, v2, v;
	do{
		cout<<"t1 = ";  cin>>t1;
		cout<<"v1 = ";  cin>>v1;
		cout<<"t2 = ";  cin>>t2;
		cout<<"v2 = ";  cin>>v2;
		t=((v1+v2)*t2 + v1*t1)/(2*v1+v2);
		v=v1+v2;
		cout<<t<<"  "<<v<<endl;
	}while(true);
	return 0;
}
