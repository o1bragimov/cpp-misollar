#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float A,B;
  int N;
   
   
   cout<<"A=";cin>>A;
   cout<<"B=";cin>>B;
   cout<<"qoshish = "<<endl;
   cout<<"ayirish = "<<endl;
   cout<<"kopaytirish = "<<endl;
   cout<<"bolish = "<<endl;  cin>>N;
  if (B==0) 
  {
  cout<<"xato";
  }
  else
  {
   switch(N)
  {
  case 1:cout<<A+B;
  break;
  case 2:cout<<A-B;
  break;
  case 3:cout<<A*B;
  break;
  case 4:cout<<A/B;
  break;
  default:cout<<"xato";
  }
  }
  return 0;
}
