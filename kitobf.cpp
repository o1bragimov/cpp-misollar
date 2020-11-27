#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int s,n,m,a,b,c,d,h,w,e,t,y,u,o,p,z,v;
	float g,l,q;
    cout<<"Dasturchi NamMTI 21U-19 guruh talabasi O.Ibragimov ." <<"\n";  
 cout<<"\n";
 cout<<"\n";
 cout<<"\n";
 
    cout<<"Qog'oz betlash uchun dastur."<<endl;
	cout<<"\n";
	r:
	cout<<"\n";
	cout<<"Qog'ozni faqat old tarafiga chiqarish uchun (1)ni bosing "<<endl;
	cout<<"\n";   
	cout<<"Qog'ozni old va orqa taraflariga chiqarish uchun (2)ni bosing  "<<endl;  
	cout<<"\n";   
	cout<<"Qog'ozni kitobcha shaklida chiqarish uchun (3)ni bosing "<<endl; 
	cout<<"\n";   
	cin>>w;
    cout<<"\n";   
    switch(w)
    {
    	case 1: 
		cout<<"Qaysi varaqdan boshlamoqchisiz (son kiriting) - "; cin>>a;
    	cout<<"\n";
     	cout<<"\n";
	    cout<<"Qaysi varaqda tugatmoqchisiz (son kiriting) - "; cin>>b;
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"\n";
	    if(a>0 && b>0 && a<b)
	    {
		cout<<"Chiqariladigan qog'ozlar soni - "<<(b-a)+1<<" ta"<<endl;
		cout<<"\n";
		
	    t=a;
	    do{
	    	
	    	cout<<t<<",";
	    //	cout<<"\n";
	    	t++;
		}while(b>=t);
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
		}
		else
		{
    	cout<<"Diqqat!!! Xato kiritdingiz, qiymatni boshqaldan tekshirib kiriting."<<"\n";
	    }
	 
		break;
		case 3: 
	
	
	cout<<"\n";
	
	cout<<"Qaysi varaqdan boshlamoqchisiz (son kiriting) - "; cin>>a;
	cout<<"\n";
	cout<<"\n";
	cout<<"Qaysi varaqda tugatmoqchisiz (son kiriting) - "; cin>>b;
	cout<<"\n";
	cout<<"\n";
	if(a>0 && b>0 && b>a)
	{
	s=0;
	for(int i=a; b>=i; i++)
	{
		s=s+1;
    }
     if(s%4==0)
	 {
	 cout<<"\n";	
	 cout<<"Kitob chiqarish uchun varaqlar soni yetarli."<<endl;
	 cout<<"\n";
     cout<<"Kitobga ketadigan qog'ozlar soni - "<<s/4<<" ta"<<"\n";
	 cout<<"\n";
	l=(b+a)/2.;
	d=ceil(l);
	m=floor(l);
	int j=a; 
	int k=b;
	cout<<"\n";
	cout<<"oldi varaqlari:"<<endl;
	cout<<"\n";
	do{
		
		cout<<k<<","<<j<<",";  
	
	    	
		
		
		j=j+2; k=k-2;
		
	} while((j<= m || k>= d) && (a>k || b>j ) );
     cout<<endl;
     cout<<"\n";
     cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
     cout<<"\n";
	int x=a; 
	int y=b;
	cout<<"\n";
	cout<<"orqa varaqlari:"<<endl;
	cout<<"\n";
	do{
		cout<<x+1<<","<<y-1<<","; 
			
		x=x+2; y=y-2;
		
	} while((x<= m || y>= d) && (a>x || b>y ) );
      	 
	cout<<"\n";
	cout<<"\n";
	cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
    cout<<"\n";
	 
		 
     }
	 else
	 {
	 	 
	 cout<<"Kitob chiqarish uchun varaqlar soni yetishmayabdi "<<endl;	
	 
	} 
	 cout<<"\n";
	 cout<<"\n";
    }
    else
    {
    	cout<<"Diqqat!!! Xato kiritdingiz, qiymatni boshqaldan tekshirib kiriting."<<"\n";
	}
	break;
	case 2:
		cout<<"Qaysi varaqdan boshlamoqchisiz (son kiriting) - "; cin>>a;
    	cout<<"\n";
     	cout<<"\n";
	    cout<<"Qaysi varaqda tugatmoqchisiz (son kiriting) - "; cin>>b;
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"\n";
	    if((a>0 || b>0) && b>a)
	    {
		cout<<"\n";
		v=b-a;
		cout<<"Chiqariladigan qog'ozlar soni "<<ceil(v/2.)+1<<" ta"<<endl;
		cout<<"\n";
		if((a%2==1 && b%2==0) || (a%2==0 && b%2==1))
		{
	    t=a;
	    cout<<"\n";
	    cout<<"oldi varaqlari:"<<endl;
    	cout<<"\n";
	    do{
	    	
	    	cout<<t<<",";
	    	t=t+2;
		}while(b>t);
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
		y=a;
	    cout<<"\n";
	    cout<<"orqa varaqlari:"<<endl;
    	cout<<"\n";
	    y=b;
		do{
	    	
	    	cout<<y<<",";
	    	y=y-2;
		}while(a<y);
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
	 }
	 else
	 {
	   if(a%2==1 && b%2==1)
	   {
	   t=a;
	    cout<<"\n";
	    cout<<"oldi varaqlari:"<<endl;
    	cout<<"\n";
	    do{
	    	
	    	cout<<t<<",";
	    	t=t+2;
		}while(b>=t);
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
		y=a;
	    cout<<"\n";
	    cout<<"orqa varaqlari:"<<endl;
    	cout<<"\n";
	    y=b-1;
		do{
	    	
	    	cout<<y<<",";
	    	y=y-2;
		}while(a<y);
	    cout<<"\n";
	    cout<<"\n";	
	    
		   }	
	 
	 else
     
	if(a%2==0 && b%2==0)
	   {
	   t=a;
	    cout<<"\n";
	    cout<<"oldi varaqlari:"<<endl;
    	cout<<"\n";
	    do{
	    	
	    	cout<<t<<",";
	    	t=t+2;
		}while(b>=t);
	    cout<<"\n";
	    cout<<"\n";
	    cout<<"DIQQAT bu yerda oxiridagi vergulni olmay keting."<<"\n";
		y=a;
	    cout<<"\n";
	    cout<<"orqa varaqlari:"<<endl;
    	cout<<"\n";
	    y=b-1;
		do{
	    	
	    	cout<<y<<",";
	    	y=y-2;
		}while(a<y);
	    cout<<"\n";
	    cout<<"\n";	
	    
		   }	
	 }
		}
		else
		{
    	cout<<"Diqqat!!! Xato kiritdingiz, qiymatni boshqaldan tekshirib kiriting."<<"\n";
	    }
	 
		break;
		default : cout<<"Diqqat!!! Xato kiritdingiz, qiymatni boshqaldan tekshirib kiriting."<<"\n";
   }
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
	 cout<<"Dasturni qaytaldan boshlash uchun (1) ni bosing "<<"\n"<<"\n"<<"Dasturdan chiqish uchun (2) ni bosing "<<"\n"; cin>>g;
	
	 if(g!=2 && g==1)
	 goto r;
	cout<<"Dasturchi NamMTI 21U-19 guruh talabasi O.Ibragimov e'tiboringiz uchun raxmat." <<"\n";
	 system("pause");
	 cout<<"Dasturchi NamMTI 21U-19 guruh talabasi O.Ibragimov e'tiboringiz uchun raxmat." <<"\n";
	return 0;
}
