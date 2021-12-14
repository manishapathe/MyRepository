#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    char *fname;
    int len;
public:
    ~student()
    {
        cout<<"destructor called"<<fname<<endl;
        delete(fname);
    }
    student(char  *p)
    {
        len=strlen(p);
        fname=new char[len];
        strcpy(fname,p);
        strupr(fname);
    }
    void show()
    {
        cout<<fname<<"\t"<<len<<endl;
    }
};
int main()
{
    student s1("abcd");
    student s2("xyz");
    s1.show();
    s2.show();
    return(0);
}
