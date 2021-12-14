#include<iostream>
using namespace std;
class time1
{
private:
    int min;
public:
    time1()
    {
        min=0;
    }
    void show()
    {
        cout<<min;
    }
    void setmin(int a)
    {
        min=a;
    }
};
class time
{
private:
    int hour,min;
public:
    time(int x,int y)
    {
        hour=x;
        min=y;
    }
    operator time1()
    {
        time1 temp;
        int z;
        z=hour*60+min;
        temp.setmin(z);
        return temp;
    }
};
int main()
{
    time t1(1,40);
    time1 t2;
    t2=t1;
    t2.show();
    return(0);
}
