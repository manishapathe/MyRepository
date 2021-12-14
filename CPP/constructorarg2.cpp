#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    test(int x,int y)
    {
        i=x;
        j=y;
        cout<<"constructor with arg called\n";

    }
    void add()
    {
        cout<<"addition is"<<i+j<<endl;
    }

};
int main()
{
    test t1(10,20);
    t1.add();
    test t2(100,200);
    t2.add();
    return(0);
}
