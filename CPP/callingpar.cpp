#include<iostream>
using namespace std;
class a
{
private:
    int i;
public:
    a(int x)
    {
        i=x;
        cout<<"constructor a with args called\n";
    }
    a()
    {
        i=10;
        cout<<"constructor a without args called\n";
    }
    int geti()
    {
        return i;
    }

};
class c
{
private:
    int k;
public:
    c(int x)
    {
        k=x;
        cout<<"constructor c with args called\n";
    }
    int getk()
    {
        return k;
    }
};
class b:public a,public c
{
private:
    int j;
public:
    b():a(100),c(200)
    {
        j=20;
    }
    void add()
    {
        cout<<geti()+getk()+j<<endl;
    }
};
int main()
{
    b ob;
    ob.add();
    return(0);

}
