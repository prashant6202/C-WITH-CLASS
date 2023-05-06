#include<iostream>
using namespace std;
class base
{
public:
    int a;
};
class div1:virtual public base
{
public:
    int b;
};
class div2:virtual public base
{
public:
    int c;
};
class div3:public div1,public div2
{
public:
    int d;
};
int main()
{
    div3 obj;
    obj.a=10;
    obj.b=20;
    obj.c=30;
    obj.d=obj.a+obj.b+obj.c;
    cout<<"obj.d= "<<obj.d;
    return 0;
}

