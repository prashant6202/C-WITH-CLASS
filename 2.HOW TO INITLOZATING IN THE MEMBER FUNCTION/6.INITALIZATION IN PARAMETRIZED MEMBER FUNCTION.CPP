//this initailization is vary important because we can access more than one employ data in the class.
//3.initailization paramatrized member function.
#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{ private:
  int age;
  char name[20];
  float sal;
  public:
  void set(int,char*,float);
  void show();
};
void emp::set(int a,char*n,float s)
{
  age=a;
  strcpy(name,n);
  sal=s;
}
void emp::show()
{
 cout<<"age= "<<age<<endl;
 cout<<"name= "<<name<<endl;
 cout<<"salary= "<<sal<<endl<<endl;
}
int main()
{ clrscr();
 emp e,f;
 e.set(21,"anil",25000);
 f.set(20,"sonu",35000);
 e.show();
 f.show();
 getch();
 return 0;
}