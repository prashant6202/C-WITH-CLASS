//2.******initilazation in the member function*****
//it is good for single employ of data but when,we will call to other employ than same data will be copy.so we will not use for taking more than one data.//
#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{ private:
  int age;
  char name[20];
  float sal;
  public:
  void get();
  void show();
};
void emp::get()
{
   age=25;
   strcpy(name,"LAVISH");
   sal=40000;
}
void emp::show()
{
 cout<<"age= "<<age<<endl;
 cout<<"name= "<<name<<endl;
 cout<<"salary= "<<sal<<endl;
}
int main()
{ clrscr();
emp e;
e.get();
e.show();
getch();
return 0;
}