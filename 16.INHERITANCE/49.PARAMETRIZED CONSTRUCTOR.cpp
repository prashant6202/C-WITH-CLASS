/*IF THE CONSTRACTOR IN BASE CLASS IS PARAMETRIZED THEN WE MUST CALL THAT CONSTRUCTOR FROM THE CONSTRUCTOR OF DERIVED CLASS EXPLICITLY,
 OTHERWISE THE COMPILER WILL GENERATE SYNTAX ERRORR.
 ==============================================================================================================================================*/
 #include<iostream>
 using namespace std;
 class A
 {
 public:
    A(int i)
    {
        cout<<"in constructor of base class A"<<endl;
    }
    ~A()
    {
        cout<<"in Destructor of vase class A "<<endl;
    }
 };
 class B:public A
 {
 public:
    B():A(31)                  //THIS IS COMPALSORY......
    {
        cout<<"in constructor of derived class B "<<endl;
    }
~B()
{
    cout<<"in destructor of derived class B"<<endl;
}
 };
 int main()
 {
     B obj;
     return 0;
 }
