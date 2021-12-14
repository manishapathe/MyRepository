#include<iostream>
using namespace std;
class a
{
public:

    void read()
    {
        cout<<"read from file"<<endl;
    }
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
 void show()
    {
        cout<<"in a"<<endl;
    }
};
class b:public a
{
public:

    void show()
    {
        cout<<"in b"<<endl;
    }
};
int main()
{
    b ob;
    ob.show();
    return(0);
}
       cout<<"read from network"<<endl;
    }

};
void show(a *r)
{
    r->read();
}
int main()
{
    a ob1;
    b ob2;
    c ob3;
    show(&ob1);
    show(&ob2);
    show(&ob3);
    return(0);
}

