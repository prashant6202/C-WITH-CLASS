/*HOW CAN I PASS THE OBJECT AS ARGUMENT IN MEMBER FUNCTION
 THERE ARE THREE(3) TYPE OF PASSING AS ARUMENT IN MEMBER FUNCTION.
 1.PASSING OBJECT BY VALUE
 2.PASSING OBJCET BY ADDRESS
 3.PASSING OBJECT BY REFRERENCE ---------> VVVI AS COMPARE TO BOTH
 =============================================================================*/
 #include<iostream>
 using namespace std;
 class Box
 {
     int l,b,h;
 public:
    void get()
    {
        cout<<"enter l,b,h ";
        cin>>l>>b>>h;
    }
    void show()
    {
        cout<<l<<","<<b<<","<<h<<endl;
    }
    int comparevol(Box);          //object passing by value
 };
 int Box::comparevol(Box p)
 {
     int x,y;
     x=l*b*h;           //vol of B1
     y=p.l*p.b*p.h;    //vol of B2
     if(x>y)
     return 1;
     else if(x<y)
        return -1;
     else
        return 0;
 }
 int main()
 {
     Box B1,B2;
     B1.get();
     B2.get();
     B1.show();
     B2.show();
     int result=B1.comparevol(B2);
     if(result==1)
     cout<<"vol of B1 is greater";
     else
        cout<<"vol of B2 is greater";
     return 0;
 }
