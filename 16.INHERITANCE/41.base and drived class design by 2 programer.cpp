//two member function are same than compiler confused that how will be call
//calling syntx---><obj_name>.<that class which is called>::<mem_fun_name>();

#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
public:
    void get()
    {
        cout<<"enter l,b,h";
        cin>>l>>b>>h;
    }
    void show()                           //here show()
    {
        cout<<l<<endl<<b<<endl<<h<<endl;
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
void show()                //here show()
{
    cout<<mat<<endl;
}
};
int main()
{
    carton obj;
    obj.get();
    obj.set();
    obj.Box::show();
    obj.carton::show();
    return 0;
}
