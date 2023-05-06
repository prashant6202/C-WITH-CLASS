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
    void show()
    {
        cout<<l<<endl<<b<<endl<<h<<endl;
    }
};
class carton:protected Box
{
    char mat[20];
public:
    void set()
{     get();
    cout<<"enter mat ";
    cin>>mat;
}
void display()
{ show();
    cout<<mat<<endl;
}
};
int main()
{
    carton obj;
    obj.set();
    obj.display();
    return 0;
}
