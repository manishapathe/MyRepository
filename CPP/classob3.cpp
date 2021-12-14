#include<iostream>
using namespace std;
class bulb
{
private:
    char company_name[15];
    int watt;
public:
    //action
    void getdata()
    {
        cout<<"enter company name:";
        cin>>company_name;
        cout<<"enter wattage:";
        cin>>watt;
    }
    void showdata()
    {
        cout<<company_name;
        cout<<"\t";
        cout<<watt;
        cout<<"\n";
    }
};
main()
{
    bulb b1;
    b1.getdata();
    b1.showdata();
}
