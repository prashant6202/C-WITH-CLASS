//const-> it means permanent fixed the value
#include<iostream>
using namespace std;
class circle
{
    int rad;
    const float pi=3.14;  //it is called initlization
    public:
    void get()
    {
        cout<<"enter radious of circle ";
        cin>>rad;
    }
    void area()
    {
         float ar;
         ar=pi*rad*rad;
         cout<<"area of circle is "<<ar;
    }

};
int main()
{
    circle c;
    c.get();
    c.area();
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ;
