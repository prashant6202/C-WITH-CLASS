//function overloading -> same name but diffrent argument
//function overloading in volume program
#include<iostream.h>
#include<conio.h>
void volume(int);
void volume(int,int,int);
int main()
{
 clrscr();
 int choice;
 int s;
 int l,b,h;
 cout<<"select a figer"<<endl;
 cout<<"1.cube"<<endl<<"2.cuboid"<<endl;
 cout<<"enter a choice";
 cin>>choice;
 switch(choice)
 {
  case 1:
  cout<<"enter side of cube";
  cin>>s;
  volume(s);
  break;
 case 2:
 cout<<"enter l,b,h";
 cin>>l>>b>>h;
 volume(l,b,h);
 break;
 default:
 cout<<"wrong choice";
 }
 void volume(int s)
 {
  cout<<" volume of cube is: "<<s*s*s<<endl;
 }
 void volume(int l,int b,int h)
 {
  cout<<"volume of cuboid is: "<<l*b*h<<endl;
 }
