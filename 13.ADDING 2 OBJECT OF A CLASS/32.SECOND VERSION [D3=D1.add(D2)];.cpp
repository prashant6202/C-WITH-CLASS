//  D3=D1.add(D2);
#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
public:
    void get()
    {
        cout<<"enter feet and inches ";
        cin>>feet>>inches;
    }
    void show()
    {
        cout<<"FEET= "<<feet<<endl<<"INCHES= "<<inches<<endl;
    }
    Distance add (const Distance &);
};
Distance Distance::add(const Distance &q)
{
    Distance temp;
    temp.feet=feet+q.feet;
    temp.inches=inches+q.inches;
    if(temp.inches>=12)
    {
        temp.feet=temp.feet+temp.inches/12;
        temp.inches=temp.inches%12;
    }
    return temp;
}
int main()
{
    Distance D1,D2,D3;
    D1.get();
    D2.get();
    D3=D1.add(D2);
    D1.show();
    D2.show();
    D3.show();
    return 0;
}
