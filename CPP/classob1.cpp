#include<iostream>
using namespace std;
class demo
{
public:
    void disp()
    {
        cout<<"in public section\n";
        show();
    }
private:

        void show()
        {
            cout<<"in private section\n";
        }

};
main()
{
    demo d1;//creating object
    d1.disp();
}
