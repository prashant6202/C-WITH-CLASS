//passing object by reference........int comparevol(const Box&);
#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
public:
    void get()
    {
        cout<<"enter the value of l,b,h ";
        cin>>l>>b>>h;
    }
    void show()
    {
        cout<<l<<","<<b<<","<<h<<endl;
    }
    int comparevol(const Box&);
};
int Box::comparevol(const Box&p)
{
    int x,y;
    x=l*b*h;
    y=p.l*p.b*p.h;
    if(x>y)
        return 1;
    else if(x<y)
        return -1;
    else
        return 0;
}
int main()
{
    Box B1,B2;
    B1.get();
    B2.get();
    B1.show();
    B2.show();
    int result;
    result=B1.comparevol(B2);
    if(result==1)
        cout<<"volume of B1 is greater";
    else if(result==-1)
        cout<<"volume of B2 is grester";
    else
        cout<<"both volume are equal";
    return 0;
}
