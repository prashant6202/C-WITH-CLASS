#include<iostream>
#include<string.h>
class emp
{
    int age;
    char name[20];
    static int count;
public:
    emp(int,char*);
    void show();
    static void showcount();
    ~emp();
};
emp::emp(int a,char*n)
{
    age=a;
    strcpy(name,n);
    ++count;
}
void emp::show()
{
    cout<<"age= "<<age<<endl;
    cout<<"name= "<<name<<endl;

}
void emp::showcount()
{
    cout<<"age= "<<age<<endl<<"name= "<<name<<endl;

}
emp::emp()
{
    --cout;
}
int main()
{
emp::showcount();
emp e(33,"rahul");
emp f(22,"anand");
e.show();
f.show();
emp::showcount()
{
    emp x(23,"sooraj");
    emp y(22,"snehal");
    x.show();
    y.show();
    emp::showcount();
}
emp::showcount();
return 0;
}

