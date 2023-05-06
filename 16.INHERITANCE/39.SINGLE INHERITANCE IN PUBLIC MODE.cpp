#include<iostream>
using namespace std;
class Box
{
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
};
int main()
{
    carton obj;
    obj.get();
    obj.set();
    obj.show();
    obj.display();
    return 0;
}
