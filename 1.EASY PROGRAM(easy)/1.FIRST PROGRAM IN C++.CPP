//it is first program of c++//
#include<iostream.h>
#include<conio.h>
class student
{  private:
  int roll;
  char grade;
  float per;
  public:
  void get();
  void show();
};
void student::get()
{
  cout<<"enter roll,grade,per:";
  cin>>roll>>grade>>per;
}
void student::show()
{
 cout<<"Roll="<<roll<<endl<<"Grade="<<grade<<endl<<"Percentage="<<per<<endl;
}
int main()
{ clrscr();
 student s ;
 s.get();
 s.show();
 getch();
 return 0;
 }