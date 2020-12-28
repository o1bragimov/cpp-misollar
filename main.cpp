#include <iostream>

using namespace std;

int main()
{
    int q,w,e,r,t,y,u,i,o,f;
    int m,n;
     int z=3, l=3;
       int x[z][l]={{4,9,2},{3,5,7},{8,1,6}};
     do{
            cout<<endl;
    cout << "1, 2, 3, 4, 5, 6, 7, 8, 9 shu sonlardan foydalangan holda '3x3' o'lchamdagi kvadratning hamma ustun va qatorlar"<<endl;
    cout<<"yig'indisi 15 ga teng bo'lsin. (! ! ! Faqat BUTUN sonlardan foydalaning ! ! !) "<<endl;
    n=m=3;

    cout<<endl;





     q=1;w=2;e=3;r=4;t=5;y=6;u=7;i=8;o=9;
    int a[n][m]={{q,w,e},{r,t,y},{u,i,o}};
     for(int i=0; n>i; i++)
    {
        for(int j=0; m>j; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

        int h=3,g=3;
        int d[h][g];

cout<<endl;
cout<<"BOSHLADIK"<<endl;
cout<<endl;
     for(int i=0; n>i; i++)
    {
        cout<<i+1<<" - qatorni kiriting "<<endl;
        cout<<endl;
        for(int j=0; m>j; j++)
        {
             cin>>d[i][j];

        }
        cout<<" "<<endl;
    }

    for(int i=0; n>i; i++)
    {
        for(int j=0; m>j; j++)
        {
            cout<<d[i][j]<<" ";

        }
        cout<<" "<<endl;
    }

   int fa=0, va=0;
    for(int i=0; 3>i; i++)
    {
        for(int j=0; 3>j; j++)
        {
           if(d[i][j] == x[i][j])

    {
            fa++;
    }

    else
    {
        va++;
    }

        }}

cout<<endl;
     if(fa>va && va==0)
    {
      cout<<"Qoyil siz to'g'ri topdingiz :) "<<endl;
    }
       else
       {
            cout<<"Uzur qaytaldan urinib ko'ring :( "<<endl;
       }


    cout<<endl;
        cout<<endl;
        cout<<endl;
    int s;
    cout<<"tozalash (butun son kiriting) "; cin>>s;

    if((s>0)  || (s<0) || (s==0))
    {
    system("cls");
    }

      else

      {
          system("cmd");
      }

      }while(true);
      system("pause");
    return 0;
}
