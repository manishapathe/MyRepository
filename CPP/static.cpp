#include<iostream>
using namespace std;
class test
{
private:
    int i;//instant variable
    static int j;//static variable
public:
    void setij(int x)
    {
        i=x;
        j++;
    }
    void show()
    {
        cout<<i<<" "<<j<<endl;
    }
};
int test::j;
main()
{
    test t1;
    test t2;
    test t3;
    t1.setij(10);
    t2.setij(20);
    t3.setij(30);
    t1.show();
    t2.show();
    t3.show();
}
