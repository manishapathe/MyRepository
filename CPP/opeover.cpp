#include<iostream>
using namespace std;
class test
{
private:
    int i,j,k;
public:
    test(int x,int y,int z)
    {
        i=x;
        j=y;
        k=z;
    }
    void operator -()
    {
        i=-i;
        j=-j;
        k=-k;
        cout<<"operator function called\n";
    }
    void show()
    {
        cout<<i<<"\t"<<j<<"\t"<<k<<endl;
    }
};
int main()
{
    test t1(10,20,30);
    t1.show();
    -t1;
    t1.show();
    return(0);
}
