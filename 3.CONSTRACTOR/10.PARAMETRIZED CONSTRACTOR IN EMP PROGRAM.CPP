//using parametrized constractor in EMP program
#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{
 int age;
 char name[20];
 float sal;
 public:
 emp(int,char*,float); // tripale parametrized constractor
 void show();
};
emp::emp(int a,char*p,float s)
{
 age=a;
 strcpy(name,p);
 sal=s;
}
void emp::show()
{
 cout<<"AGE IS: "<<age<<endl;
 cout<<"NAME IS: "<<name<<endl;
 cout<<"SALARY IS: "<<sal<<endl;
}
 int main()
 {
   clrscr();
   emp e(20,"prashant",12000);
   emp f(22,"abhishek",15000);
   e.show();
   f.show();
   getch();
  return 0;
}
