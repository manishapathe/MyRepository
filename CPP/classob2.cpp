#include<iostream>
using namespace std;
class demo
{
public:
    int j;
private:
    int i;
};
main()
{
    demo d1;
    d1.j=200;
    //insertion operator
    cout<<d1.j;
}
