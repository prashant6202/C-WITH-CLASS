//box()->non parametrized,single parametrized,triple parametrized
#include<iostream.h>
#include<conio.h>
class Box
{
  int l,b,h;
  public:
 Box();
 Box(int);
 Box(int,int,int);
 void show();
};
Box::Box()
{
 cout<<"enter length,breadth,height: ";
 cin>>l>>b>>h;
}
Box::Box(int s)
{
 l=b=h=s;
}
Box::Box(int i,int j,int k)
{
 l=i;
 b=j;
 h=k;
}
void Box::show()
{
 cout<<"Legth= "<<l<<endl;
 cout<<"Breadth= "<<b<<endl;
 cout<<"Height= "<<h<<endl;
}
int main()
{ clrscr();
 Box B1;
 Box B2(10);
 Box B3(5,6,7);
 B1.show();
 B2.show();
 B3.show();
 getch();
 clrscr();
 return 0;
}

