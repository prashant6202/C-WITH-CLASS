#include<iostream>
using namespace std;
class figure
{
protected:
    int dim1,dim2;
public:
    void get()
    {
        cout<<"enter dimensonal ";
        cin>>dim1>>dim2;
    }
    void show()
    {
        cout<<"dim1= "<<dim1<<endl<<"dim2= "<<dim2<<endl;
    }
};
class Rectangle:public figure
{
public:
    void area()
    {
        cout<<"Rectangle area= "<<dim1*dim2<<endl;
    }
};
class Trangle:public figure
{
public:
    void area()
    {
        cout<<"Trangle area= "<<0.5*dim1*dim2<<endl;
    }
};
int main()
{
      Rectangle R;
        R.get();
        R.show();
        R.area();
        Trangle T;
        T.get();
        T.show();
        T.area();
        return 0;
}
