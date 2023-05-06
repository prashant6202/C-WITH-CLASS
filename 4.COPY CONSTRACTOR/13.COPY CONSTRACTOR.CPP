//copy constractor-> syntax-><return_type>&<ref_ver>=<var_name>;
#include<iostream.h>
#include<conio.h>
class Box
{
 int l,b,h;
 public:
 Box();
 Box(int);
 Box(int,int,int);
 Box(Box&);
 void show();
};
Box::Box()
{
 cout<<"enter length,breadth and hight: ";
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
Box::Box(Box&p)
{
 l=p.l;
 b=p.b;
 h=p.h;
}
void Box::show()
{
 cout<<"Length= "<<l<<endl;
 cout<<"Breadth= "<<b<<endl;
 cout<<"Hight= "<<h<<endl;
}
int main()
{
 clrscr();
 Box B1;
 Box B2(10);
 Box B3(20,30,40);
 Box B4(B1);
 cout<<"before copy value:"<<endl;
 B1.show();
 cout<<"  "<<endl;
 B2.show();
 cout<<"  "<<endl;
 B3.show();
 cout<<endl<<"after using copy constractor than value are: "<<endl;
 B4.show();
 getch();
 return 0;
}