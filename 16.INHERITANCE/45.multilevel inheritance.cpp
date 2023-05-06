#include<iostream>
using namespace std;
class Num
{
protected:
    int a,b;
public:
    void get()
    {
        cout<<"enter a,b ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<a<<","<<b<<endl;
    }
};
class addNum:public Num
{
    int c;
public:
    void set()
    {
        get();
    }
    void add()
    {
        c=a+b;
    }
    void display()
    {
        show();
        cout<<"sum= "<<c<<endl;
    }
};
class diffNum:public addNum
{
    int d;
public:
    void accept()
    {
        set();

    }
    void diff()
    {
        d=a-b;
    }
    void print()
    {
        display();
        cout<<"Diff is "<<d;
    }
};
int main()
{
    diffNum obj;
    obj.accept();
    obj.add();
    obj.diff();
    obj.print();
    return 0;
}
