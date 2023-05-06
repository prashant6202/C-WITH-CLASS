#include<iostream.h>
#include<conio.h>
class factorial
{
int f,n;
   public:
   void init();
   void get();
   void calculate();
   void show();
};
void factorial::init()
{
     f=1;
}
void factorial::get()
{
 cout<<" enter the number";
 cin>>n;
}
void factorial::calculate()
{
   for(int i=1;i<=n;i++)
    {
       f=f*i;
    }
}
void factorial::show()
{
 cout<<"number is : "<<n<<endl;
 cout<<"factorial is "<<f<<endl;
}
int main()
{
   clrscr();
   factorial obj;
   obj.init();
   obj.get();
   obj.calculate();
   obj.show();
   getch();
   return 0;
}