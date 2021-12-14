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
    }
    test()
    {
        i=0;
        j=0;
    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;
    }
    friend test operator +(test ob1,test ob2);
};
test operator +(test ob1,test ob2)
{
     test temp;
     temp.i=ob1.i+ob2.i;
     temp.j=ob1.j+ob2.j;
     return temp;
}
int main()
{
    test t1(10,20);
    test t2(30,40);
    test t3;
    t3=t1+t2;
    t3.show();
    return(0);
}
