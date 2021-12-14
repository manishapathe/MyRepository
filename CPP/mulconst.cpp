#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"in a"<<endl;
    }
} ;
class b:public a
{
public:
    b()
    {
        cout<<"in b"<<endl;
    }
};
class c:public b
{
public:
    c()
    {
        cout<<"in c"<<endl;
    }
};
int main()
{
    c ob;
    return(0);
}

