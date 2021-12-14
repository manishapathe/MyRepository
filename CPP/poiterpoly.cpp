#include<iostream>
using namespace std;
class test
{
public:
    void show()
    {
        cout<<"hello world";
    }
};
int main()
{
    test t1;
    test*p;
    p=&t1;
    p->show();
    return(0);
}
