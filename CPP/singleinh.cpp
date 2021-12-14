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
        cin>>id>>name;
    }
    void showdata()
    {
        cout<<id<<"\t"<<name<<endl;
    }
};

class mark:public student
{
private:
    float m1,m2;
public:
    void setmark()
    {
        cout<<"enter two subject mark"<<endl;
        cin>>m1>>m2;
    }
    void showmark()
    {
        cout<<m1<<"\t"<<m2;
    }
};
int main()
{
    mark ob;
    ob.setdata();
    ob.showdata();
    ob.setmark();
    ob.showmark();
    return(0);
}
