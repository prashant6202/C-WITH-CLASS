//constractor overloading-> multiple constractor in the same class and diffrent arugument
//in this program main() is dizziness by other programmer
#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{
 int age;
 char name[20];
 float sal;
 public:
 emp();    //non-parametrized constractor
 emp(int,char*,float); //triple parametrized constractor
 void show();
};
emp::emp()
{
 cout<<"enter age,name,salary";
 cin>>age>>name>>sal;
}
emp::emp(int a,char*p,float s)
{
 age=a;
 strcpy(name,p);
 sal=s;
}
void emp::show()
{
 cout<<"AGE= "<<age<<endl;
 cout<<"NAME= "<<name<<endl;
 cout<<"SALARY= "<<sal<<endl;
}
int main()
{
 clrscr();
 emp e(22,"YADAV",30000);
 emp f;
 e.show();
 f.show();
 getch();
 return 0;
}





























