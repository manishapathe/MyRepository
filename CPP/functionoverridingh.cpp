#include<iostream>
using namespace  std;
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
