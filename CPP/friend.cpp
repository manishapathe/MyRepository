#include<iostream>
using namespace std;
class test1
{
private:
    int i,j;
public:
    void seti()
    {
        i=10;
    }
    friend void show(test1 ob);
};
void show(test1 ob)
{
    cout<<ob.i;
}
int main()
{
    test1 t1;
    t1.seti();
    show(t1);
    return(0);
}
