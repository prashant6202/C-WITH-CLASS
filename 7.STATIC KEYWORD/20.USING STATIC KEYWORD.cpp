//using "static" keyword-> class name::<static member function name>();
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    int age;
    char name[20];
    static int count;
public:
    emp(int,char*);
    void show();
    void showcount();
};
int emp::count;
emp::emp(int a ,char*p)
{
    age=a;
    strcpy(name,p);
    count++;
}
void emp::show()
{
    cout<<"age= "<<age<<endl;
    cout<<"name= "<<name<<endl;
}
void emp::showcount()
{
    cout<<"total emp working are: "<<count<<endl;
}
int main()
{
    emp e(20,"anil");
    emp p(22,"sonu yadav");
    e.show();
    p.show();
    e.showcount();
    p.showcount();
    return 0;
}
