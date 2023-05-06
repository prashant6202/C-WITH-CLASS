#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
public:
    void get()
    {
        cout<<"enter feet and inches ";
        cin>>feet>>inches;
    }
    void show()
    {
        cout<<feet<<","<<inches<<endl;
    }
    bool operator ==(const Distance&);
};
bool Distance::operator==(const Distance &p)
{
    int x,y;
    x=feet*12+inches;
    y=p.feet*12+p.inches;
    if(x==y)
        return true;
    return false;
}
int main()
{
    Distance D1,D2;
    D1.get();
    D2.get();
    D1.show();
    D2.show();
    if(D1==D2)
        cout<<"equal";
    else
        cout<<"not equal";
    return 0;
}
