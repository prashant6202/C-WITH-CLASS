#include<iostream>
using namespace std;
class emp
{
    int age;
    char name[20];
    float sal;
public:
    void get()
    {
        cout<<"enter age,name and salary ";
        cin>>this->age>>this->name>>this->sal;
    }
    void show()
    {
        cout<<"AGE= "<<this->age<<endl<<"NAME= "<<this->name<<endl<<"SALARY= "<<this->sal<<endl;
    }

};
int main()
{
    emp e,f;
    e.get();
    f.get();
    e.show();
    f.show();
    return 0;
}
