#include<iostream>
using namespace std;
main()
{
    int year;
    cout<<"enter year";
    cin>>year;
    if((year%4==0 &&  year%100!=0 )||year%400==0)
    {
        cout<<"leap year";

    }
    else

    {
        cout<<"not leap year";
    }

}
