#include<iostream>
using namespace std;
class figure
{
protected:
    int l,b;
public:
    void get()
    {
        cout<<"enter l,b";
        cin>>l>>b;
    }
    void show()
    {
        cout<<l<<","<<b<<endl;
    }
};
class printdata
{
public:
    void show(int a)
    {
        cout<<"area is " <<a;
    }
};
class rectangle:public figure,public printdata
{
    int area;
public:
    int calArea()
    {
        area=l*b;
        return area;
    }
};
int main()
{
    rectangle r;
    r.get();
    r.figure::show();        //this type call than compiler will not be confuised.
    int x=r.calArea();
    r.printdata::show(x);     //this type call than compiler will not be confuised.
    return 0;
}
