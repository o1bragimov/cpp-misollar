#include<iostream>
using namespace std;
int main()
{
	int n, a,b;
	
	float m;
    
    cout<<"n = "; cin>>n;
	
	a=n/10;
	
	b=n%10;
	
	switch(a)
	{
		
		case 1: cout<<"o'n "; 
		break;
		case 2: cout<<"yigirma "; 
		break;
		case 3: cout<<"o'ttiz "; 
		break;
		case 4: cout<<"qirq "; 
		break;
		case 5: cout<<"ellik "; 
		break;
		case 6: cout<<"oltmish "; 
		break;
		case 7: cout<<"yetmish "; 
		break;
		case 8: cout<<"sakson "; 
		break;
		case 9: cout<<"to'qson "; 
		break;
		 
	}
	
	
	
	switch(b)
	{
		
		case 1: cout<<"bir "; 
		break;
		case 2: cout<<"ikki "; 
		break;
		case 3: cout<<"uch "; 
		break;
		case 4: cout<<"to'rt "; 
		break;
		case 5: cout<<"besh "; 
		break;
		case 6: cout<<"olti "; 
		break;
		case 7: cout<<"yetti "; 
		break;
		case 8: cout<<"sakkiz "; 
		break;
		case 9: cout<<"to'qqiz "; 
		break;
		. 
	}
	
	
	return 0;
}
