#include<iostream>
using namespace std;
class a
{
private:
    int i,j;
public:
    void setij(int x,int y)
    {
        i=x;
        j=y;
    }
    int geti()
    {
        return i;
    }
    int getj()
    {
        return j;
    }
};
class b:public a
{
public:
    void add()
    {
        cout<<geti()+getj()<<endl;
    }
};
class c:public a
{
public:
    void sub()
    {
        cout<<geti()-getj()<<endl;
    }
};
int main()
{
    b ob1;
    ob1.setij(10,20);
    c ob2;
    ob2.setij(90,80);
    ob1.add();
    ob2.sub();
    return(0);
}
