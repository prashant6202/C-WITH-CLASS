//constractor -> member function of a calss, no any return type ,automatically call as soon as the object of a class get created.
//rewrite factorial program

#include<iostream.h>
#include<conio.h>
class factorial
{
 int n,f;
 public:
 factorial();
 void get();
 void calculate();
 void show();
};
factorial::factorial()
{
 f=1;
}
void factorial::get()
{
 cout<<"enter the number";
 cin>>n;
}
void factorial::calculate()
{
 for(int i=1;i<=n;i++)
 f=f*i;
}
void factorial::show()
{
 cout<<"number is : "<<n<<endl;
 cout<<"factorial is : "<<f<<endl;
}
int main()
{
 clrscr();
 factorial obj;
 obj.get();
 obj.calculate();
 obj.show();
 getch();
 return 0;
}