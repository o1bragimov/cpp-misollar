#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float g,a,r,n,s,p,R;
  float const pi=3.14;
  
  cout<<"radius  = "; cin>>r;
  cout<<"tomoni  = "; cin>>n;
  
  a=2*r*tan(M_PI/n);
  p=4*a;
  s=n*r*r*tan(M_PI/n);
  cout<<"perimetri = "<<p<<endl;
  cout<<"yuzasi = "<<s<<endl;
  
  return 0;
}
