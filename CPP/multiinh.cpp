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
    void setmarks()
    {
        cout<<"enter two subject marks"<<endl;
        cin>>m1>>m2;
    }
    float getm1()
    {
        return m1;
    }
    float getm2()
    {
        return m2;
    }

};
class result:public mark
{
public:
    void set()
    {
        setdata();
        setmarks();
    }
    void showresult()
    {
        showdata();
        float avg;
        avg=(getm1()+getm2())/2;
        cout<<"average marks are:"<<avg;
    }
};
int main()
{
    result ob;
    ob.set();

    ob.showresult();
    return(0);
}
