//************ADD TWO NUMBER***************
#include<iostream.h>
#include<conio.h>
class addation
{ private:
  int a;
  int b;
  int c;
  public:
  void get();
  void add();
  void show();
};
void addation::get()
{
   cout<<"enter two number:";
   cin>>a>>b;
}
void addation::add()
{
   c=a+b;
}
void addation::show()
{
 cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"addation= "<<c<<endl;
}
int main()
{ clrscr();
 addation l;
 l.get();
 l.add();
 l.show();
 getch();
 return 0;
}