#include<iostream>
using namespace std;
class time
{
private:
    int hour,min;
public:
    time(int m)
    {
        hour=m/60;
        min=m%60;
    }
    void showtime()
    {
        cout<<hour<<":"<<min<<endl;
    }
    int gethour()
    {
        return hour;
    }
    int getmin()
    {
        return min;
    }
};
class time1
{
private:
    int min;
public:
    time1(time ob)
    {
        min=ob.gethour()*60+ob.getmin();
    }
    void disp()
    {
        cout<<min<<endl;
    }
};
int main()
{
    int x=100;
    time t1=x;
    t1.showtime();
    //with constructor
    time1 t2=t1;
    t2.disp();
    return(0);
}
