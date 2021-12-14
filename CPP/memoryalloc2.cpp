#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    void setij(int x,int y)
    {
        i=x;
        j=y;
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
    t1.setij(10,20);
    t2.setij(30,40);
    t1.add();
    t2.add();
}
