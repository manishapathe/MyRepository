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
    void showobject(test ob)
    {
        cout<<ob.i<<"\t"<<ob.j<<endl;

    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;

    }

};
int main()
{
    test t1;
    test t2;
    t1.setij(10,20);
    t2.setij(30,40);
    t1.showobject(t2);

    return(0);
}
