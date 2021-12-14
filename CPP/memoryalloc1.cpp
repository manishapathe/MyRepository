#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    void setij()
    {
        i=10;
        j=20;
    }
    void add()
    {
        cout<<i+j<<endl;
    }
};
main()
{
    test t1;
    test t2;
    t1.setij();
    t2.setij();
    t1.add();
    t2.add();
}
