//two type of member function of const ------> 1.accessor->those member function which do not change the value of data member.......2.mutatuor-> which change the vale of data member
#include<iostream>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
public:
    void get()
    {
        cout<<"enter the roll,grade and percentage: ";    //mutatuotr
        cin>>roll>>grade>>per;
    }
    void show()
    {
        cout<<"ROLL= "<<roll<<endl<<"GRADE= "<<grade<<endl<<"PERCENTAGE= "<<per<<endl;  // accessor
    }
};
int main()
{
    student s;
    s.get();
    s.show();
    return 0;
}
