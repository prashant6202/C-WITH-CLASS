#include<iostream>
using namespace std;
class Box
{
protected:
    int l,b,h;
public:
    void get()
    {
        cout<<"enter l,b,h ";
        cin>>l>>b>>h;
    }
    void show()
    {
        cout<<l<<","<<b<<","<<h<<endl;
    }
};
class carton:public Box
{
    char mat[20];
public:
    void set()
    {
        cout<<"enter mat ";
        cin>>mat;
    }
    void display()
    {
        cout<<mat<<endl;
    }
    void volume()
    {
        cout<<"VOLUME= "<<l*b*h;
    }
};
int main()
{
    carton obj;
    obj.get();
    obj.set();
    obj.show();
    obj.display();
    obj.volume();
    return 0;
}
