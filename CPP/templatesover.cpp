#include<iostream>>
using namespace std;
template<class T>
void show(T i)
{
    cout<<"template called\n";
    cout<<i<<endl;
}
void show(int x)
{
    cout<<"int  called\n";
    cout<<x<<endl;
}
int main()
{
    show(100);
    show(1.2);
    return(0);
}
