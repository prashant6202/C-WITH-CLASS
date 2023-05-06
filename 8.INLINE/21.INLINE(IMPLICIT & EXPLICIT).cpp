//inlice->if small code than use inline and we should not contain any complecated statement like for,while,do-while,etc...
//implicit inline->we should define the body of member function in class .and not use the keyword inline.
//explicit inline-> define the body outside of the class prefixed with the keyword inline.

#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    int age;
    char name[20];
public:
    void get()
    {
        cout<<"enter age and name";            //implicit inline
        cin>>age>>name;
    }
    void show();

};
void emp::show()
{
    cout<<"AGE="<<age<<endl<<"NAME="<<name<<endl;
}
int main()
{
    emp e;
    e.get();
    e.show();
    return 0;
}
