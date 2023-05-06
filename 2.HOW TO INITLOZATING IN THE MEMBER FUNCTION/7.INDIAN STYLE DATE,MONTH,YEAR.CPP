//********take your birthday and today date************
// indian style of date
#include<iostream.h>
#include<conio.h>
class date
{ private:
  int dd,mm,yy;
  public:
  void setdate(int,int,int);
  void showdate();
};
void date::setdate(int d,int m,int y)
{
      dd=d;
      mm=m;
      yy=y;
}
void date::showdate()
{
  cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{ clrscr();
  date d1,d2;
  d1.setdate(31,3,2001);
  d2.setdate(7,3,2023);
  d1.showdate();
  d2.showdate();
  getch();
  return 0;
}