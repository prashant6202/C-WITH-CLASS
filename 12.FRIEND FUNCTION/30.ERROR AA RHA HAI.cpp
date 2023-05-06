#include<iostream>
using namespace std;
class beta
class alpha
{
    int a;
public:
    void get()
    {
        cout<<"enter a :";
        cin>>a;
    }
friend void compare(alpha,beta);
};
class beta
{
    int b;
public:
    void set()
    {
        cout<<"enter b :";
        cin>>b;
    }
    friend void comapre(alpha,beta);
};
void compare(alpha obj1,beta obj2)
{
    if(obj1.a>obj2.b)
        cout<<"grater is "<<obj1.a<<endl;
    else if (obj1.a<obj2.b)
        cout<<"grater is "<<obj2.b<<endl;
    else
        cout<<"both are equal";
}
int main()
{
    alpha obj1;
    beta obj2;
    obj1.get();
    obj2.set();
    compare(obj1,obj2);
    return 0;
}
