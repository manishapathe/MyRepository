#include<iostream>
using namespace std;
class student
{
private:
    int id;
    char name[15];
public:
    void getdata()
    {
        cout<<"enter id and name:"<<endl;
        cin>>id>>name;
    }
    void showdata()
    {
        cout<<"\n========\n";
        cout<<id<<"\t"<<name<<endl;
        cout<<"\n=====================\n";
    }
};
main()
{
    student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].getdata();

    }
    cout<<"your data:"<<endl;
    for(i=0;i<3;i++)
    {
        s[i].showdata();
    }
}
