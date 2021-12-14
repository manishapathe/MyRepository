#include<iostream>
using namespace std;
template<class T>
void show(T i)
{
    cout<<i<<endl;
}
template<class T,class V>
void disp(T i,V j)
{
    cout<<i<<" "<<j<<endl;
}
int main()
{
    show(100);
    show('a');
    show(1.2);
    disp(101,'x');
    return(0);

}
