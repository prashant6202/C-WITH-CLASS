/* FRIEND FUNCTION-->IT MEANS IT IS NOT PART OF MEMBER FUNCTION OF CLASS BUT THEY CAN ACCESS ALL PRIVATE DATE OF THAT CLASS .\
1. SYNTAX-->  friend ret_type fun_name(<arg_list>);
2.when we defind a friend function than neither the class NAME not the SCOPE RESULATION(::) is applied.
3. whenever we call a friend function, we never use CALLING OBJECT OR DOT OPERATOR.it only accepts the object as argument whose data it wants to acces.
============================================================================================================================================================ */
#include<iostream>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
public:
    void get();
    friend void show(student);
};
void student::get()
{
    cout <<"enter roll,grade,per";
    cin>>roll>>grade>>per;
}
void show(student p)
{
    cout<<p.roll<<","<<p.grade<<","<<p.per<<endl;
}
int main()
{
    student s;
    s.get();
    show(s);
    return 0;
}
