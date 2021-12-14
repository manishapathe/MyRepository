#include<iostream>
using namespace std;
class a
{
public:
    void show()
    {
        cout<<"object of aa class"<<endl;
    }
};
class b:public a
{
public:

    void show()
    {
        cout<<"object of b class"<<endl;
    }
};
int main()
{
    b ob;
    a ob2;
    ob.show();
    ob2.show();
    return(0);
}



