//copy all data of B1 in B2
#include<iostream.h>
#include<conio.h>
class Box
{
 int l,b,h;
 public:
 box();
 box(int,int,int);
 void show();
};
Box::box()
{
 cout<<"enter l,b,h";
 cin>>l>>b>>h;
}
Box::box(int i,int j,int k)
{
 l=i;
 b=j;
 h=k;
}
void Box::show()
{
 cout<<"Length= "<<l<<endl;
 cout<<"Breadth= "<<b<<endl;
 cout<<"Hight= "<<h<<endl;
}
int main()
{ clrscr();
 Box B1;
 Box B4;
 B4=B1;
 B1.show();
 B4.show();
 getch();
 return 0;
}
//this type is wrong