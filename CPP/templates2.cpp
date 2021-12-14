#include<iostream>
using namespace std;
template<class T,class V>
class test
{
private:
    T i;
    V j;
public:
    test(T x,V y)
    {
        i=x;
        j=y;
    }
    void show()
    {
        cout<<i<<" "<<j<<endl;
    }
};
int main()
{
    test<int,double>t1(100,1.2);
    t1.show();
    return(0);
}
