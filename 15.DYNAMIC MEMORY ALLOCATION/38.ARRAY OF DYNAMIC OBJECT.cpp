#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
        void get()
        {
            cout<<"enter l,b,h";
            cin>>l>>b>>h;
        }
        void show()
        {
            cout<<l<<","<<b<<","<<h;
        }

};
int main()
{
    Box*p;
    int n;
    cout<<"how many boxes ";
    cin>>n;
    p=new Box[n];
    if(p==0)
    {
        cout<<"INSUFFICIEND MEMORY";
        return 1;
    }

for(int i=0;i<n;i++)
{
    (p+i)->get();
}
for(int i=0;i<n;i++)
{
    (p+i)->show();
}
delete[]p;
return 0;
}
