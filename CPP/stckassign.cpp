#include<iostream>
using namespace std;
class push
{
private:
    int i,j,k;
public:
    push()
    {
        cout<<"enter numbers";
        cin>>i>>j>>k;
    }
    int geti()
    {
        return i;
    }
    int getj()
    {
        return j;
    }

    int getk()
    {
        return k;
    }

};
class pop:public push
{
public:
    pop()
    {
        cout<<getk()<<getj()<<geti()<<endl;
    }
};
int main()
{
    pop ob;
    return(0);
}
