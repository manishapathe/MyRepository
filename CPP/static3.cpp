#include<iostream>
using namespace std;
void show()
{
    static int i=0;
    i++;
    cout<<i<<endl;
}
main()
{
    show();
    show();
    show();
}
