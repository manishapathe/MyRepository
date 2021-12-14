#include<iostream>
using namespace std;
class a
{
public:
    void show()
    {
        cout<<"in base class" <<endl;
    }
};
class b:public a
{
public:
    void disp()
    {
        cout<<"in derivedclass"<<endl;
    }
};
int main()
{
    b ob;
    ob.show();
    ob.disp();
    return(0);


}
