#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Enter array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("your array:\n");
    for(i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            printf("\n%d",arr[i]);
        }
    }
    return 0;
}
