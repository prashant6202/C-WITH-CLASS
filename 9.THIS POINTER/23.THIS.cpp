//THIS-> 1.BY USING "THIS" WE CAN REDUCE THE BODY OF COPY CONSTRACTOR TO ONE SINGLE LINE.



#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
public:
    Box(int,int,int);
    Box(Box&);
    void show();
};
Box::Box(int l,int b,int h)
{
    this->l=l;
    this->b=b;
    this->h=h;
}
Box::Box(Box&p)
{
    *this=p;
}
void Box::show()
{
    cout<<l<<","<<b<<","<<h<<endl;
}
int main()
{
     Box B1(10,20,30);
     Box B2(B1);
     B1.show();
     B2.show();
     return 0;
}
