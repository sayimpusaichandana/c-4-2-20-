//swapping of two no's by using call by reference
#include<stdio.h>
void swap(int x,int y);
int main()
{
    int a=10,b=20;
    printf("\n values before swapping \n");
    printf("a=%d and b=%d",a,b);
    swap(a,b);
    printf("\n values after swapping \n");
    printf("a=%d and b=%d",b,a);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}