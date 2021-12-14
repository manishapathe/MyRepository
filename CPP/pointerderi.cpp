#include<iostream>
using namespace std;
class a
{
public:
    void show()
    {
        cout<<"in a"<<endl;
    }
};
class b:public a
{
public:
    void disp()
    {
        cout<<"in b"<<endl;
    }
};
int main()
{
    a ob1;
    a ob2;
    a *p;
    p=&ob1;
    p->show();
    p=&ob2;
    p->show();
    return(0);
}
