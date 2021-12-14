#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void setdata()
    {
        cout<<"enter id and name"<<endl;
        cin>>id>>name>>endl;
    }
    void showdata()
    {
        cout<<id<<name<<endl;
    }
};
class mark
{
    void setmarks()
    {
        cout<<"enter two subject marks"<<endl;
        cin>>m1>>m2;
    }
    void showmarks()
    {
        cout<<m1<<"\t"<<m2<<endl;
    }
};
class result:public student,public mark
{
    void set()
    {
        setdata();
        setmarks();
    }
    void showresult()
    {
       showdata();
       showmarks();
    }
};
int main()
{
    result ob;
    ob.set();
    ob.showresult();
    return(0);
}
