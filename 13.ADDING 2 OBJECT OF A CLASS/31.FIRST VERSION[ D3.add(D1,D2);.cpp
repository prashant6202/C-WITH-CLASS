//first style---> D3.add(D1,D2);

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
    void add(const Distance&,const Distance&);     //passing object by refrecne
};
void Distance::add(const Distance&p,const Distance&q)
{
    feet=p.feet+q.feet;
    inches=p.inches+q.inches;
    if(inches>=12)
    {
        feet=feet+inches/12;
        inches=inches%12;
    }
}
int main()
{
    Distance D1,D2,D3;
    D1.get();
    D2.get();
    D3.add(D1,D2);
    D1.show();
    D2.show();
    D3.show();
    return 0;
}
