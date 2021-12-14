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
        cout<<id<<"\t"<<name;
    }
};
class mark:public student
{
private:
    float m1,m2;
public:
    void setmarks()
    {
        cout<<"enter two subject marks";
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
class sport
{
private:
    int grade;
public:
    void setgrade()
    {
        cout<<"\n enter sport grade"<<endl;
        cin>>grade;
    }
    void showgrade()
    {
        cout<<grade<<endl;
    }
};
class result:public mark,public sport
{
public:
        void set()
        {
            setdata();
            setmarks();
            setgrade();
        }
        void showresult()
        {
            showdata();
            float avg;
            avg=(getm1()+getm2())/2;
            cout<<"average mark are:"<<avg<<endl;
            showgrade();
        }
};
int main()
{
    result ob;
    ob.set();
    ob.showresult();
    return(0);
}
