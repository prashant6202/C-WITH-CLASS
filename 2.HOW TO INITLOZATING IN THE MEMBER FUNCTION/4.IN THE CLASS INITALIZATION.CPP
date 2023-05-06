//three type of intilization ->1.in class ,2.in member function,3.parametrized member function.
//1.in class initialization//
//we can not initialization in the calss in turboo compiler//
#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{ int age=25;
  char name[20]={"prashant"};
  float sal=25000;
  public:
  void show();
};
void emp::show()
{
 cout<<"age= "<<age<<endl;
 cout<<"name= "<<name<<endl;
 cout<<"salay= "<<sal<<endl;
}
int main()
{ clrscr();
  emp e;
  e.show();
  getch();
}
