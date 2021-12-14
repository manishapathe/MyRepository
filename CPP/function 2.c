#include<stdio.h>

add(int x,int y)
{
    int z;
    z=x+y;
    printf(" \n addition is : %d ",z);
}

area(float r)
{
    float a;
    a=3.14*r*r;
    printf("\n area is : %d ",a);

}
main()
{
    add(56,35);
    area(45.2);
    add(55,55);
    area(12.4);
}
