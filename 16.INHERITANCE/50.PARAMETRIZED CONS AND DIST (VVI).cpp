#include<iostream>
using namespace std;
class Num
{
protected:
    int a,b;
public:
    Num(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    }
};
class AddNum:Num
{
    int c;
public:
    AddNum(int x,int y):Num(x,y)
    {

    }
    void add()
    {
        c=a+b;
    }
    void show()
    {
        Num::show();
        cout<<"sum= "<<c<<endl;
    }
};
int main()
{
    AddNum obj(10,20);
    obj.add();
    obj.show();
    return 0;
}
