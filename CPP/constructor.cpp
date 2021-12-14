 #include<iostream>
 using namespace std;
 class area
 {
 private:
    float r,a;
 public:
    //constructor
    area()
    {
        r=1.2;
        cout<<"constructor called\n";

    }
    void calculatearea()
    {
        a=3.14*r*r;
        cout<<"area is"<<a<<endl;
    }
 };
 int main()
 {
     area ob;
     ob.calculatearea();
     return(0);
 }
