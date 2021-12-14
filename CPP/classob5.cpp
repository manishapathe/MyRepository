#include<iostream>
using namespace std;
class student
{
private:
    int  id;
    char name[15];
    float per;
public:
    void getdata()
    {
        cout<<"\n enter id:";
        cin>>id;
        cout<<"\n enter name:";
        cin>>name;
        cout<<"\n enter student percentage:\n";
        cin>>per;
    }
    void print()
    {
        cout<<"id\t name\t percentage\n";
        cout<<id<<"\t"<<name<<"\t"<<per<<"\n";

    }
};
main()
{
    student s1;
    s1.getdata();
    student s2;
    s2.getdata();
    s1.print();
    s2.print();
}
