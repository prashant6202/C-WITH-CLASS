// D3.add(D1,D2),D3=D1.add(D2),D3=add(D1,D2);-------->D3=D1+D2;
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
    void operator ++();
};
void counter::operator++()
{
    ++count;
}
int main()
{
    counter c1(10);
    c1.show();
    ++c1;
    c1.show();
    return 0;
}
