#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float y,d,b,c,a;
	int x;
	cout<<"A =  "; cin>>a;
	cout<<"B =  "; cin>>c;
	
	cout<<"1 qo'shish "<<endl; 
	cout<<"2 ayrish "<<endl; 
	cout<<"3 ko'paytirish "<<endl;
    cout<<"4 bo'lish "<<endl;
	cin>>x;
    
    switch(x)
    {
    	case 1: cout<<"natija  "<<a+c;
    	break;
    	case 2: cout<<"natija  "<<a-c;
    	break;
    	case 3: cout<<"natija  "<<a*c;
    	break;
    	case 4: cout<<"natija  "<<a/c;
    	break;
	}
	
	return 0;
}
