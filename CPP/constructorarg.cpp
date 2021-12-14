#include<iostream>
using namespace std;
class area
{
private:
    float r,a;
public:
    //constructor with arg
    area(float r1)
    {
        r=r1;
        cout<<"constructor with argument\n";
    }
    void calculatearea()
    {
        a=3.14*r*r;
        cout<<"area is"<<a<<endl;
    }
};
int main()
{
    area ob(1.2);
    ob.calculatearea();
    return(0);
}
