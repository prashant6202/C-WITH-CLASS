//using constractor overloading in STUDENT PROGRAM
#include<iostream.h>
#include<conio.h>
class student
{
 int roll;
 char grade;
 float per;
 public:
 student();
 student(int,char,float);
 void get();
 void show();
};
student::student()
{
}
student::student(int r,char g,float p)
{
 roll=r;
 grade=g;
 per=p;
}
void student::get()
{
 cout<<"enter roll,grade and percentage";
 cin>>roll>>grade>>per;
}
void student::show()
{
 cout<<"ROLL= "<<roll<<endl;
 cout<<"GRADE= "<<grade<<endl;
 cout<<"PERCENTAGE= "<<per<<endl;
}
int main()
{
 clrscr();
 student s(1,'A',56.5);
 student p;
 p.get();
 p.show();
 s.show();
 getch();
 return 0;
}