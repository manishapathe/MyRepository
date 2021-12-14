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
    test add(test ob)
    {
        test t4;
        t4.i=i+ob.i;
        t4.j=j+ob.j;
        return(t4);
    }
    void show()
    {
        cout<<i<<"\t"<<j;

    }
};
main()
{
    test t1,t2,t3;
    t1.setij(10,20);
    t2.setij(30,40);
    t3=t1.add(t2);
    t3.show();
}
