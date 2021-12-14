#include<iostream>
using namespace std;
class test
{
public:
    void add(int x,int y)
    {
        cout<<"int addition called\n";
        cout<<x+y;
    }
    void add(float x,float y)
    {
        cout<<"float addition called\n";
        cout<<x+y<<endl;
    }
};
int main()
{
    test t1;
    t1.add(1.2f,2.1);
    t1.add(4,5);
    return(0);
}
