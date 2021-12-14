
#include<iostream>
using namespace std;
class a
{
public:
    //pure virtual fuction
    //abstract function

 virtual void read()=0;
};
class b:public a
{
public:

    void read()
    {
        cout<<"read from usb"<<endl;
    }
};
class c:public a
{
public:
    void read()
    {
        cout<<"reaad from network"<<endl;
    }

};
void show(a *r)
{
    r->read();
}
int main()
{
    //a ob1;cannot creat object for pure
    b ob2;
    c ob3;
    //show(&ob1);
    show(&ob2);
    show(&ob3);
    return(0);
}

