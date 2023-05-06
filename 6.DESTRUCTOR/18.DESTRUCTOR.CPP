//destructor-> destructor function gets called just before the object is to be destroy
//it is automalically called by compiler but just before the object of the class is to be destroyed

// symbol-> ~ .    ~box();
#include<iostream.h>
#include<conio.h>
class student
{
 int roll;
 char grade;
 float per;
 public:
 student();
 void show();
 ~student();
};
student::student()
{
 cout<<"CONSTRACTOR CALLED....."<<endl;
 cout<<"enter roll,grade,percentage";
 cin>>roll>>grade>>per;
}
void student::show()
{
 cout<<"roll= "<<roll<<endl<<"grade= "<<grade<<endl<<"percentage= "<<per<<endl;
}
student::~student()
{
 cout<<"DESTRUCTOR CALLED....."<<endl;
}
int main()
{
 clrscr();
 student s;
 s.show();
 getch();
 return 0;
}
