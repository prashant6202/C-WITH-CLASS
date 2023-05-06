//using defaut parametrized contructorint in student program
#include<iostream.h>
#include<conio.h>
class student
{
 int roll;
 char grade;
 float per;
 public:
 student(int=0,char= ' ',float=0.0);  //vary improtant as compare to other
 void get();
 void show();
};
student::student(int r,char g,float p)
{
 roll=r;
 grade=g;
 per=p;
}
void student::get()
{
 cout<<"enter roll, grade and percentage: ";
 cin>>roll>>grade>>per;
}
void student::show()
{
 cout<<"ROLL= "<<roll<<endl;
 cout<<"GRADE= "<<grade<<endl;
 cout<<"PRECENTAGE= "<<per<<endl;
}
int main()
{
 clrscr();
 student s(1,'A',99.99);
 student p;
 p.get();
 p.show();
 s.show();
 getch();
 return 0;
}
