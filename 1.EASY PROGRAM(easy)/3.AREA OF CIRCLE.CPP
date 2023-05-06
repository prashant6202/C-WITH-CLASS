//******AREA OF CIRCLE******
#include<iostream.h>
#include<conio.h>
#include<math.h>
class circle
{ private:
  int rad;
  float area;
  public:
  void get();
  void calculate();
  void show();
};
void circle::get()
{
 cout<<"enter the radious of circle:";
 cin>>rad;
}
void circle::calculate()
{
 area=3.14*pow(rad,2);
}
void circle::show()
{
  cout<<"radious= "<<rad<<endl<<"AREA OF THE CIRCLE IS : "<<area<<endl;
}
int main()
{ clrscr();
  circle c;
  c.get();
  c.calculate();
  c.show();
  getch();
  return 0;
}

