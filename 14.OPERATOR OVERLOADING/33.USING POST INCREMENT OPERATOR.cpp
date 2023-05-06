#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter(int c)
    {
        count=c;
    }
    counter()
    {
        count=0;
    }
    void show()
    {
        cout<<"count= "<<count<<endl;
    }
    counter operator++(int);
};
counter counter::operator++(int)
{
    counter temp;
    temp.count=count;
    count++;
    return temp;
}
int main()
{
    counter c1(10);
    counter c2;
    c1.show();
    c2.show();
    c2=c1++;
    c1.show();
    c2.show();
    return 0;
}
