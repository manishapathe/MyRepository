#include<iostream>
using namespace std;
class test
{
public:
    void add(int x,int y)
    {
        cout<<"int add called\n";
        cout<<x+y;
    }

   void add(float x,float y)
   {
       cout<<"float add called\n";
       cout<<x+y;
   }
};
int main()
{
    test t1;
    t1.add(1.2f,3.4f);
    t1.add(100,200);
    return(0);
}
