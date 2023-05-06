/*CONSTRACTOR CALLED FORM BASE TO DERIVED.
 DESTRACTOR CALLED FROM DERIVED TO BASE.
==========================================================*/
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"in constractor of base A"<<endl;
    }
    ~A()
    {
        cout<<"in Distractor of base A"<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"in Constractor of derived class B"<<endl;
    }
    ~B()
    {
        cout<<"in distractor of derived class B"<<endl;
    }
};
int main()
{
    B obj;
    return 0;
}
