#include<iostream>
using namespace std;
class a
{
private:
    int i;
public:
    a()
    {
        i=10;
    }
    int geti()
    {
        return i;
    }
};
class b:public a
{
private:
    int j;
public:
    b()
    {
        j=20;
    }
    void add()
    {
        cout<<geti()+j<<endl;
    }

};
int main()
{
    b ob;
    ob.add();
    return(0);
}
