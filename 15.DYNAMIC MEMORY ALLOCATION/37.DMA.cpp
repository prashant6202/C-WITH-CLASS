/*DMA--->in c++ they are two keyword new and delete.
1.new<data_type>[size];
2.delete[]<ptr_name>;
====================================================================*/
#include<iostream>
class MyArray
{
    int *p;
    int n;
    int sum;
public:
   MyArray();
    void get();
    void calculate();
    void show();
    ~MyArray();
};
 MyArray::MyArray()
{
    cout<<"enter size";
    cin>>n;

    p=new MyArray[n];
    if(p==0)
cout<<"memory insufficient";
       exist(1);
}
sum=0;
 void MyArray::get()
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter a value ";
        cin>>p[i];
    }

}
void MyArray::calculate()
{
    for(int i=0;i<n;i++)
    {
        sum-sum+p[i];
    }
}
void MyArray::show()
{
    cout<<"value are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"there sum is "<<sum;
}
MyArray::~MyArray()
{
    delete[]p;
}
int main()
{
    MyArray obj;
    obj.get();
    obj.calculate();
    obj.show();
    return 0;
}
