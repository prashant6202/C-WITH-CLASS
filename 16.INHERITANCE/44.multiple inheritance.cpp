#include<iostream>
using namespace std;
class Figure
{
protected:
    int l,b;
public:
    void get()
    {
        cout<<"enter l,b ";
        cin>>l>>b;
    }
    void show()
    {
        cout<<l<<","<<b<<endl;
    }
};
class Printdata
{
public:
    void print(int a)
    {
        cout<<"AREA IS "<<a;
    }
};
class Rectangle:public Figure,public Printdata
{
    int area;
public:
    void cal_area()
    {
        area=l*b;
        print(area);
    }
};
int main()
{
    Rectangle R;
    R.get();
    R.show();
    R.cal_area();
    return 0;
}
